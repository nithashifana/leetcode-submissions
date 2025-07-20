// Check Divisibility by Digit Sum and Product©leetcode
// Easy

class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int temp = n;
        while(temp) {
            int rem = temp%10;
            sum += rem;
            product *= rem;
            temp/= 10;
        }
        return n % (sum + product) == 0;
    }
};