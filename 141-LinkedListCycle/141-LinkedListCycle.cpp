// Last updated: 8/8/2026, 4:42:22 PM
1class Solution {
2public:
3    bool hasCycle(ListNode *head) {
4
5        ListNode *slow = head;
6        ListNode *fast = head;
7
8        while(fast != nullptr && fast->next != nullptr)
9        {
10            slow = slow->next;
11            fast = fast->next->next;
12
13            if(slow == fast)
14            {
15                return true;
16            }
17        }
18
19        return false;
20    }
21};