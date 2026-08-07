// Last updated: 07/08/2026, 13:37:28
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        if(head == nullptr){
15            return head ;
16        }
17        ListNode *temp = head ;
18        while(temp!=nullptr && temp->next!= nullptr){
19            if(temp->val == temp->next->val){
20                     temp->next = temp->next->next;
21            }
22             else{
23            temp = temp->next ;
24        }
25           
26        }
27       
28
29        return head;
30    }
31};