// Last updated: 8/9/2026, 3:37:12 PM
1class Solution {
2public:
3    ListNode* removeElements(ListNode* head, int val) {
4
5        ListNode* dummy = new ListNode(0);
6        dummy->next = head;
7
8        ListNode* temp = dummy;
9
10        while (temp->next != nullptr) {
11
12            if (temp->next->val == val) {
13                temp->next = temp->next->next;
14            }
15            else {
16                temp = temp->next;
17            }
18        }
19
20        return dummy->next;
21    }
22};