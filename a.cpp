🚀 Day 1 – Arrays (Striver SDE Sheet)
1. Sort Colors (0s, 1s, 2s)
🔹 Approaches:

Brute Force: Sort using any built-in sort (O(n log n)).

Counting Sort: Count 0,1,2 then overwrite (O(n), O(1)).

Dutch National Flag Algorithm: Three pointers (low, mid, high) – O(n), O(1).

✅ Code + Explanation

(i) Brute Force

void sortColors(vector<int>& nums) {
    sort(nums.begin(), nums.end());
}


👉 Uses STL sort, not optimal but works.

(ii) Counting Method

void sortColors(vector<int>& nums) {
    int cnt0=0, cnt1=0, cnt2=0;
    for(int x: nums){
        if(x==0) cnt0++;
        else if(x==1) cnt1++;
        else cnt2++;
    }
    int i=0;
    while(cnt0--) nums[i++]=0;
    while(cnt1--) nums[i++]=1;
    while(cnt2--) nums[i++]=2;
}


👉 Count frequencies and rewrite array.

(iii) Dutch National Flag

void sortColors(vector<int>& nums) {
    int low=0, mid=0, high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0) swap(nums[low++], nums[mid++]);
        else if(nums[mid]==1) mid++;
        else swap(nums[mid], nums[high--]);
    }
}


👉 One-pass, three-way partition.

2. Find Missing & Repeating Number
🔹 Approaches:

Sorting: Sort + check adjacent (O(n log n)).

Hashing / freq array: Count frequencies (O(n), O(n) space).

Math Formula: Use sum and sum of squares (O(n), O(1)).

XOR Method: Partition using XOR (O(n), O(1)).

✅ Code + Explanation

(i) Sorting

pair<int,int> findTwoElement(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n=arr.size(), rep=-1, miss=-1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) rep=arr[i];
    }
    int total = n*(n+1)/2;
    int sum=accumulate(arr.begin(), arr.end(), 0);
    miss = total - (sum - rep);
    return {rep, miss};
}


👉 Duplicate is found by checking neighbors, missing = adjust with total sum.

(ii) Hashing

pair<int,int> findTwoElement(vector<int>& arr) {
    int n=arr.size();
    vector<int> freq(n+1,0);
    int rep=-1, miss=-1;
    for(int x:arr) freq[x]++;
    for(int i=1;i<=n;i++){
        if(freq[i]==0) miss=i;
        if(freq[i]==2) rep=i;
    }
    return {rep,miss};
}


👉 Frequency array directly shows missing & repeating.

(iii) Math Formula

pair<int,int> findTwoElement(vector<int>& arr) {
    long long n=arr.size();
    long long sumN = n*(n+1)/2;
    long long sumSqN = n*(n+1)*(2*n+1)/6;
    long long sum=0, sumSq=0;
    for(long long x: arr){
        sum += x;
        sumSq += 1LL*x*x;
    }
    long long diff = sum - sumN;          // x - y
    long long diffSq = sumSq - sumSqN;    // x^2 - y^2
    long long sumXY = diffSq/diff;        // x + y
    long long x = (diff + sumXY)/2;
    long long y = x - diff;
    return {(int)x,(int)y};
}


👉 Uses equations:

x - y = diff

x + y = diffSq/diff

(iv) XOR

pair<int,int> findTwoElement(vector<int>& arr) {
    int n=arr.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr^=arr[i];
        xr^=(i+1);
    }
    int bit = xr & -xr;
    int b1=0, b2=0;
    for(int i=0;i<n;i++){
        if(arr[i]&bit) b1^=arr[i]; else b2^=arr[i];
        if((i+1)&bit) b1^=(i+1); else b2^=(i+1);
    }
    for(int x: arr){
        if(x==b1) return {b1,b2};
    }
    return {b2,b1};
}


👉 XOR separates the two numbers into different buckets.

3. Merge Two Sorted Arrays without Extra Space
🔹 Approaches:

Brute Force: Put all in one array then sort.

Insertion Method: Compare & swap, then re-sort second array (O(n*m)).

Gap Method (Optimal): Like Shell sort, gradually reduce gap (O((n+m) log(n+m))).

✅ Code + Explanation

(i) Brute Force

void merge(vector<int>& a, vector<int>& b) {
    vector<int> c=a;
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(), c.end());
    int n=a.size();
    for(int i=0;i<n;i++) a[i]=c[i];
    for(int j=0;j<b.size();j++) b[j]=c[n+j];
}


👉 Extra space used.

(ii) Insertion Method

void merge(vector<int>& a, vector<int>& b) {
    int n=a.size(), m=b.size();
    for(int i=0;i<n;i++){
        if(a[i]>b[0]){
            swap(a[i], b[0]);
            int first=b[0], k;
            for(k=1;k<m && b[k]<first;k++){
                b[k-1]=b[k];
            }
            b[k-1]=first;
        }
    }
}


👉 Place smallest in order by reinserting into b.

(iii) Gap Method

int nextGap(int gap){
    if(gap<=1) return 0;
    return (gap+1)/2;
}
void merge(vector<int>& a, vector<int>& b) {
    int n=a.size(), m=b.size();
    int gap = nextGap(n+m);
    while(gap>0){
        int i=0, j=gap;
        while(j<n+m){
            int &x = (i<n)? a[i] : b[i-n];
            int &y = (j<n)? a[j] : b[j-n];
            if(x>y) swap(x,y);
            i++; j++;
        }
        gap = nextGap(gap);
    }
}


👉 Works in-place, optimal.

4. Kadane’s Algorithm (Max Subarray Sum)
🔹 Approaches:

Brute Force: Check all subarrays (O(n²)).

DP / Prefix Sum: Track max subarray ending at each index (O(n)).

Kadane’s Optimal: Keep running max, reset if negative (O(n), O(1)).

✅ Code + Explanation

(i) Brute Force

int maxSubArray(vector<int>& a){
    int n=a.size(), best=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            best=max(best,sum);
        }
    }
    return best;
}


👉 Try every subarray.

(ii) DP

int maxSubArray(vector<int>& a){
    int n=a.size();
    vector<int> dp(n);
    dp[0]=a[0];
    int best=a[0];
    for(int i=1;i<n;i++){
        dp[i]=max(a[i], dp[i-1]+a[i]);
        best=max(best, dp[i]);
    }
    return best;
}


👉 Stores best sum ending at each position.

(iii) Kadane’s

int maxSubArray(vector<int>& a){
    int sum=0, best=INT_MIN;
    for(int x: a){
        sum+=x;
        best=max(best,sum);
        if(sum<0) sum=0;
    }
    return best;
}


👉 Most efficient, no extra space.

5. Merge Overlapping Intervals
🔹 Approaches:

Brute Force: Compare each with every other.

Sorting + One Pass (Optimal): Sort by start, merge if overlap.

✅ Code + Explanation

(i) Brute Force (nested loops, inefficient)
(Usually skipped for interviews)

(ii) Optimal

vector<vector<int>> mergeIntervals(vector<vector<int>>& in){
    sort(in.begin(), in.end());
    vector<vector<int>> ans;
    vector<int> curr=in[0];
    for(int i=1;i<in.size();i++){
        if(in[i][0]<=curr[1]) curr[1]=max(curr[1], in[i][1]);
        else{
            ans.push_back(curr);
            curr=in[i];
        }
    }
    ans.push_back(curr);
    return ans;
}


👉 After sorting, just extend overlapping intervals.

6. Find Duplicate Number
🔹 Approaches:

Sorting: Check adjacent duplicates.

Hashing: Frequency array.

Linked-list Cycle (Floyd’s): O(n), O(1).

Binary Search on Value Range.

✅ Code + Explanation

(i) Sorting

int findDuplicate(vector<int>& nums){
    sort(nums.begin(), nums.end());
    for(int i=1;i<nums.size();i++)
        if(nums[i]==nums[i-1]) return nums[i];
    return -1;
}


👉 Sort then scan.

(ii) Hashing

int findDuplicate(vector<int>& nums){
    vector<int> freq(nums.size(),0);
    for(int x:nums){
        if(freq[x]) return x;
        freq[x]=1;
    }
    return -1;
}


👉 Frequency marks first repeat.

(iii) Floyd’s Cycle

int findDuplicate(vector<int>& nums){
    int slow=nums[0], fast=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}


👉 Array behaves like linked list, cycle start = duplicate.

(iv) Binary Search

int findDuplicate(vector<int>& nums){
    int l=1, r=nums.size()-1, ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        int cnt=0;
        for(int x:nums) if(x<=mid) cnt++;
        if(cnt>mid){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}


👉 Count numbers ≤ mid, use pigeonhole principle.