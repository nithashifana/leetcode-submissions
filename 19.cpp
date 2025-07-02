// Remove Nth Node From End of List
// Medium

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int k = 1;
        while(temp && temp->next) {
            temp = temp->next;
            k ++;
        }
        if(n == k) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;
        while(k - n > 1) {
            temp = temp->next;
            k --;
        }
        ListNode* curr = temp->next;
        temp->next = curr->next;
        delete curr;

        return head;
    }
};