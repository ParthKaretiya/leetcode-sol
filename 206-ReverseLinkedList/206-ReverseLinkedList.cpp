// Last updated: 07/08/2026, 13:56:26
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
13    ListNode* reverseList(ListNode* head) {
14        vector<int>v ;
15        ListNode* temp = head ;
16        while(temp!=nullptr){
17            v.push_back(temp->val) ;
18            temp = temp->next ;
19        }
20        int i = v.size()-1;
21        temp = head;
22        while(temp){
23            temp->val = v[i];
24            i-- ;
25            temp=temp->next;
26        }
27
28        return head;
29    }
30};