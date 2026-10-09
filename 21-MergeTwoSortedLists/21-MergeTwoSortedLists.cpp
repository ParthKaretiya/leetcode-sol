// Last updated: 09/10/2026, 16:25:33
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        ListNode dummy(0);
5        ListNode* tail = &dummy;
6
7        while (list1 != NULL && list2 != NULL) {
8            if (list1->val <= list2->val) {
9                tail->next = list1;
10                list1 = list1->next;
11            } else {
12                tail->next = list2;
13                list2 = list2->next;
14            }
15
16            tail = tail->next;
17        }
18
19        if (list1 != NULL) {
20            tail->next = list1;
21        } else {
22            tail->next = list2;
23        }
24
25        return dummy.next;
26    }
27};