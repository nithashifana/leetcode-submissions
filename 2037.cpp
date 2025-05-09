// Minimum number of moves to seat
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        for(int i = 0; i < seats.size()-1; i ++) {
            int min1 = i;
            int min2 = i;
            for(int j = i; j < seats.size(); j ++) {
                if(seats[j] < seats[min1]) {
                    min1 = j;
                }
            }
            for(int j = i; j < seats.size(); j ++) {
                if(students[j] < students[min2]) {
                    min2 = j;
                }
            }
            swap(seats[i], seats[min1]);
            swap(students[i], students[min2]);
        }
        int sum = 0;
        for(int j = 0; j < seats.size(); j ++) {
            sum += abs(seats[j] - students[j]);
        }
        return sum;
    }
};
