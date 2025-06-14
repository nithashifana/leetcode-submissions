// Insert Greatest Common Divisors in Linked List
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp && temp->next) {
            int a = gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(a);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }
        return head;
    }
};