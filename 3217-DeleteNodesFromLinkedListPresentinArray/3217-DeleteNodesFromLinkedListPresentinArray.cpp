// Last updated: 11/08/2026, 13:54:24
1class Solution {
2public:
3    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
4        
5        unordered_set<int> st(nums.begin(), nums.end());
6
7        // Remove matching nodes from the beginning
8        while (head != nullptr && st.count(head->val)) {
9            head = head->next;
10        }
11
12        // Remove matching nodes from the rest
13        ListNode* curr = head;
14
15        while (curr != nullptr && curr->next != nullptr) {
16            if (st.count(curr->next->val)) {
17                curr->next = curr->next->next;
18            } else {
19                curr = curr->next;
20            }
21        }
22
23        return head;
24    }
25};