// Last updated: 8/12/2026, 2:18:20 PM
1class Solution {
2public:
3    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
4        
5        ListNode* prev = list1;
6        
7        // Move to node before index a
8        for (int i = 0; i < a - 1; i++) {
9            prev = prev->next;
10        }
11        
12        ListNode* after = prev;
13        
14        // Move to node at index b
15        for (int i = 0; i <= b - a + 1; i++) {
16            after = after->next;
17        }
18        
19        // Find last node of list2
20        ListNode* tail = list2;
21        while (tail->next != nullptr) {
22            tail = tail->next;
23        }
24        
25        // Connect list1 -> list2
26        prev->next = list2;
27        
28        // Connect list2 -> remaining list1
29        tail->next = after;
30        
31        return list1;
32    }
33};