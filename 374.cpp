// Guess Number Higher or Lower
// Easy

#include <bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guess(int mid) {

    }
    int guessNumber(int n) {
        int l = 1, r = n;
        while(1) {
            int mid = l + (r - l) / 2;
            int res = guess(mid);
            if(res > 0) l = mid + 1;
            else if (res < 0) r = mid - 1;
            else return mid;
        }
    }
};