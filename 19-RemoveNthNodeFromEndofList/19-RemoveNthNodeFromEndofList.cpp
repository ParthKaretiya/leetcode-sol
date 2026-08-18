// Last updated: 18/08/2026, 17:00:47
1class Solution {
2public:
3    ListNode* removeNthFromEnd(ListNode* head, int n) {
4        
5        ListNode* first = head;
6        ListNode* second = head;
7
8        while (n > 0) {
9            second = second->next;
10            n--;
11        }
12
13        if (second == NULL) {
14            return head->next;
15        }
16
17        // Move both pointers
18        while (second->next != NULL) {
19            first = first->next;
20            second = second->next;
21        }
22
23        ListNode* temp = first->next;
24        first->next = first->next->next;
25        delete temp;
26
27        return head;
28    }
29};