// Last updated: 8/10/2026, 2:20:46 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4
5        ListNode dummy(0);
6        dummy.next = head;
7
8        ListNode* prev = &dummy;
9        ListNode* curr = head;
10
11        while(curr != nullptr)
12        {
13            if(curr->next != nullptr && curr->val == curr->next->val)
14            {
15                int value = curr->val;
16
17                while(curr != nullptr && curr->val == value)
18                {
19                    curr = curr->next;
20                }
21
22                prev->next = curr;
23            }
24            else
25            {
26                prev = curr;
27                curr = curr->next;
28            }
29        }
30
31        return dummy.next;
32    }
33};