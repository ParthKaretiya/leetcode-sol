// Last updated: 8/10/2026, 2:21:10 PM
1class Solution {
2public:
3    ListNode* rotateRight(ListNode* head, int k) {
4
5        if (head == nullptr || head->next == nullptr || k == 0)
6            return head;
7
8        // Find length and last node
9        int n = 1;
10        ListNode* tail = head;
11
12        while (tail->next != nullptr) {
13            tail = tail->next;
14            n++;
15        }
16
17        // k can be bigger than n
18        k = k % n;
19
20        if (k == 0)
21            return head;
22
23        // Make circular
24        tail->next = head;
25
26        // Find new tail
27        int steps = n - k;
28        ListNode* newTail = head;
29
30        for (int i = 1; i < steps; i++) {
31            newTail = newTail->next;
32        }
33
34        // New head is after new tail
35        ListNode* newHead = newTail->next;
36
37        // Break the circle
38        newTail->next = nullptr;
39
40        return newHead;
41    }
42};