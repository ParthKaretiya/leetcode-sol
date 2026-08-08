// Last updated: 8/8/2026, 4:41:33 PM
1class Solution {
2public:
3    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
4
5        ListNode *p1 = headA;
6        ListNode *p2 = headB;
7
8        while(p1 != p2)
9        {
10            if(p1 == nullptr)
11                p1 = headB;
12            else
13                p1 = p1->next;
14
15            if(p2 == nullptr)
16                p2 = headA;
17            else
18                p2 = p2->next;
19        }
20
21        return p1;
22    }
23};