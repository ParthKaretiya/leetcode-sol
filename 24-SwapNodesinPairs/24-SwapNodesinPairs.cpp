// Last updated: 11/08/2026, 09:20:47
1class Solution {
2public:
3    ListNode* swapPairs(ListNode* head) {
4
5        ListNode temp(0);
6        temp.next = head;
7
8        ListNode* prev = &temp;
9
10        while (prev->next != NULL && prev->next->next != NULL) {
11
12            ListNode* first = prev->next;
13            ListNode* second = first->next;
14
15            first->next = second->next;
16            second->next = first;
17            prev->next = second;
18             prev = first;
19        }
20
21        return temp.next;
22    }
23};