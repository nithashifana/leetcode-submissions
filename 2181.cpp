// Merge Nodes in Between Zeros
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        int sum = 0;
        ListNode dummy(0);
        ListNode* newNode = &dummy;
        while (temp) {
            if (temp->val) {
                sum += temp->val;
            } else {
                newNode->next = new ListNode(sum);
                newNode = newNode->next;
                sum = 0;
            }
            temp = temp->next;
        }
        return dummy.next;
    }
};