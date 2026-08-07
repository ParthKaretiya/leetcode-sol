// Last updated: 07/08/2026, 14:13:34
1class Solution {
2public:
3    ListNode* reverseList(ListNode* head) {
4
5        ListNode* prev = nullptr;
6        ListNode* curr = head;
7
8        while (curr != nullptr) {
9
10            ListNode* next = curr->next;
11
12            curr->next = prev;
13
14            prev = curr;
15            curr = next;
16        }
17
18        return prev;
19    }
20};