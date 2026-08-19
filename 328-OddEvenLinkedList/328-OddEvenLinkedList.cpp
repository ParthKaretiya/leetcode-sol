// Last updated: 19/08/2026, 13:36:46
1class Solution {
2public:
3    ListNode* oddEvenList(ListNode* head) {
4
5        if (head == nullptr || head->next == nullptr)
6            return head;
7
8        ListNode* f = head;
9        ListNode* s = head->next;
10        ListNode* even = head->next;
11
12        while (s != nullptr && s->next != nullptr) {
13
14            f->next = s->next;
15            f = s->next;
16
17            s->next = f->next;
18            s = f->next;
19        }
20
21        f->next = even;
22
23        return head;
24    }
25};