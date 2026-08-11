// Last updated: 11/08/2026, 09:22:13
1class Solution {
2public:
3    ListNode* reverseBetween(ListNode* head, int left, int right) {
4
5        // Nothing to reverse
6        if (head == nullptr || left == right) {
7            return head;
8        }
9
10        // Dummy node helps when left == 1
11        ListNode* dummy = new ListNode(0);
12        dummy->next = head;
13
14        // Move prev to the node just before 'left'
15        ListNode* prev = dummy;
16
17        for (int i = 1; i < left; i++) {
18            prev = prev->next;
19        }
20
21        // Start of the part to reverse
22        ListNode* curr = prev->next;
23
24        // Reverse nodes from left to right
25        for (int i = 0; i < right - left; i++) {
26
27            ListNode* nextNode = curr->next;
28
29            curr->next = nextNode->next;
30            nextNode->next = prev->next;
31            prev->next = nextNode;
32        }
33
34        return dummy->next;
35    }
36};