// Distance Between Bus Stops
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int s = 0, p = 0;
        if (start > destination) swap(start, destination);
        for(int i = start; i < destination; i ++) {
            s += distance[i];
        }
        for(int i = destination; i != start; i = (i + 1) % distance.size()) {
            p += distance[i];
        }
        return min(s, p);
    }
};