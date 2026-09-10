// Last updated: 9/10/2026, 9:21:11 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */class Solution {
12    int ans = 0;
13    pair<int,int> dfs(TreeNode* node) {
14        if (!node) return {0, 0};
15        auto [ls, lc] = dfs(node->left);
16        auto [rs, rc] = dfs(node->right);
17        int sum = ls + rs + node->val;
18        int cnt = lc + rc + 1;
19        if (sum / cnt == node->val) ans++;
20        return {sum, cnt};
21    }
22public:
23    int averageOfSubtree(TreeNode* root) {
24        dfs(root);
25        return ans;
26    }
27};