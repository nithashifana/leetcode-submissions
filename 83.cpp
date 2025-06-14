// Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp && temp->next) {
            if(temp->val == temp->next->val) {
                ListNode* a = temp->next;
                temp->next = temp->next->next;
                delete a;
            }
            else temp = temp->next;
        }
        return head;
    }
};