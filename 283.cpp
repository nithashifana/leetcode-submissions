// Move zeroes
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   void moveZeroes(vector<int> &nums)
   {
      int n = nums.size();
      int k = 0;
      for (int i = 0; i < n; i++)
      {
         if (nums[i] != 0)
         {
            if (nums[k] == 0)
            {
               swap(nums[i], nums[k]);
            }
            k++;
         }
      }
   }
};