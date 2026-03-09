class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sum(n), prod(n);
        long long s = 0;
        for(int i = 0; i < n; i++){
            sum[i] = s;
            s += nums[i];
        }
        long long p = 1;
        const long long LIMIT = 1e14;
        for(int i = n-1; i >= 0; i--){
            prod[i] = p;
            if(nums[i] == 0) p = 0;
            else if(p > LIMIT / nums[i]) p = LIMIT;
            else p *= nums[i];
        }
        for(int i = 0; i < n; i++){
            if(sum[i] == prod[i]) return i;
        }
        return -1;
    }
};