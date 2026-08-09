// Last updated: 8/9/2026, 3:38:27 PM
1class Solution {
2public:
3    bool isPalindrome(ListNode* head) {
4
5        // Find middle
6        ListNode* slow = head;
7        ListNode* fast = head;
8
9        while (fast != nullptr && fast->next != nullptr) {
10            slow = slow->next;
11            fast = fast->next->next;
12        }
13
14        // Reverse second half
15        ListNode* prev = nullptr;
16        ListNode* curr = slow;
17
18        while (curr != nullptr) {
19            ListNode* next = curr->next;
20            curr->next = prev;
21            prev = curr;
22            curr = next;
23        }
24
25        // Compare first half and reversed second half
26        ListNode* left = head;
27        ListNode* right = prev;
28
29        while (right != nullptr) {
30            if (left->val != right->val) {
31                return false;
32            }
33
34            left = left->next;
35            right = right->next;
36        }
37
38        return true;
39    }
40};