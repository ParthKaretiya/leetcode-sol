// Last updated: 8/12/2026, 2:20:14 PM
1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4        ListNode* dummy = new ListNode(0);
5        ListNode* curr = dummy;
6
7        int carry = 0;
8
9        while (l1 != nullptr || l2 != nullptr || carry) {
10            int sum = carry;
11
12            if (l1) {
13                sum += l1->val;
14                l1 = l1->next;
15            }
16
17            if (l2) {
18                sum += l2->val;
19                l2 = l2->next;
20            }
21
22            carry = sum / 10;
23
24            curr->next = new ListNode(sum % 10);
25            curr = curr->next;
26        }
27
28        return dummy->next;
29    }
30};