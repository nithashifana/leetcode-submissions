// Middle of the linked list
// Easy

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int i = 0;
        while(temp) {
            i ++;
            temp = temp->next;
        }
        temp = head;
        int k = 0;
        while(k < i/2) {
            k ++;
            temp = temp->next;
        }
        return temp;
    }
};