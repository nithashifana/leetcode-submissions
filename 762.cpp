// Prime Number of Set Bits in Binary Representation
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int x) {
        if (x < 2)
            return false;
        if (x == 2)
            return true;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for (int i = left; i <= right; i++) {
            int k = 0;
            left = i;
            while (left) {
                if (left % 2)
                    k++;
                left /= 2;
            }
            if (isPrime(k))
                res++;
        }
        return res;
    }
};
