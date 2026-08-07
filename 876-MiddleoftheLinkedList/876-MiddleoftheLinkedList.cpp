// Last updated: 07/08/2026, 14:20:38
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
13    ListNode* middleNode(ListNode* head) {
14        ListNode *temp = head ;
15        int count = 0 ;
16        while(temp!=0){
17            temp = temp->next ;
18            count++;
19        }
20        count = count/2 ;
21        temp = head ;
22        while(count--){
23            temp = temp->next;
24        }
25        return temp;
26
27    }
28};