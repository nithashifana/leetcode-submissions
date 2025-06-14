// Convert Binary Number in a Linked List to Integer
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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        while(head) {
            num = (num << 1) | head->val;
            head = head->next;
        }
        return num;
    }
};