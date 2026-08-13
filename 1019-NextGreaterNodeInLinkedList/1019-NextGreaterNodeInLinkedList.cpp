// Last updated: 13/08/2026, 13:36:28
1class Solution {
2public:
3    vector<int> nextLargerNodes(ListNode* head) {
4        vector<int> arr;
5
6        // Linked List -> Array
7        while (head != nullptr) {
8            arr.push_back(head->val);
9            head = head->next;
10        }
11
12        vector<int> ans(arr.size(), 0);
13        stack<int> st;
14
15        for (int i = 0; i < arr.size(); i++) {
16
17            // Current value is greater than
18            // the values whose indices are in stack
19            while (!st.empty() && arr[i] > arr[st.top()]) {
20                ans[st.top()] = arr[i];
21                st.pop();
22            }
23
24            st.push(i);
25        }
26
27        return ans;
28    }
29};