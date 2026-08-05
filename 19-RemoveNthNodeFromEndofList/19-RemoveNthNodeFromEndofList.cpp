// Last updated: 8/5/2026, 10:39:21 AM
1class Solution {
2public:
3    ListNode* removeNthFromEnd(ListNode* head, int n) {
4        ListNode dummy(0);
5        dummy.next = head;
6
7        ListNode* fast = &dummy;
8        ListNode* slow = &dummy;
9
10        for (int i = 0; i <= n; i++)
11            fast = fast->next;
12
13        while (fast) {
14            fast = fast->next;
15            slow = slow->next;
16        }
17
18        slow->next = slow->next->next;
19
20        return dummy.next;
21    }
22};