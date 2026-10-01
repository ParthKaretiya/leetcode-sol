// Last updated: 01/10/2026, 13:51:34
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode dummy(0);
5        dummy.next = head;
6
7        ListNode* prev = &dummy;
8        ListNode* curr = head;
9
10        while (curr != NULL) {
11            if (curr->next != NULL && curr->val == curr->next->val) {
12                int duplicate = curr->val;
13
14                while (curr != NULL && curr->val == duplicate) {
15                    curr = curr->next;
16                }
17
18                prev->next = curr;
19            }
20            else {
21                prev = curr;
22                curr = curr->next;
23            }
24        }
25
26        return dummy.next;
27    }
28};