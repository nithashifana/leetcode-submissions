// Merge two sorted lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        if(p1 == nullptr && p2 == nullptr) return nullptr;
        
        else if(p1 == nullptr) return p2;
        
        else if(p2 == nullptr) return p1;
        
        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        while(p1 != nullptr && p2 != nullptr) {
            ListNode* newNode;
            if(p1->val <= p2->val) {
                newNode = new ListNode(p1->val);
                p1 = p1->next;
            } else {
                newNode = new ListNode(p2->val);
                p2 = p2->next;
            }
            if(head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        while(p1 != nullptr) {
            tail->next = new ListNode(p1->val);
            tail = tail->next;
            p1= p1->next;
        }
        while(p2 != nullptr) {
            tail->next = new ListNode(p2->val);
            tail = tail->next;
            p2= p2->next;
        }
        return head;
    }
};

