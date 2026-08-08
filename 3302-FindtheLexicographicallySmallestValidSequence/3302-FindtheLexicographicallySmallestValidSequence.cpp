// Last updated: 08/08/2026, 11:01:28
1class Solution {
2public:
3    vector<int> validSequence(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6
7        vector<int> ans(m);
8
9        // last[j] = position in word1 where word2[j]
10        // can be matched when matching from right to left.
11        vector<int> last(m, -1);
12
13        int i = n - 1;
14        int j = m - 1;
15
16        // Match word2 from right to left.
17        while (i >= 0 && j >= 0) {
18            if (word1[i] == word2[j]) {
19                last[j] = i;
20                j--;
21            }
22            i--;
23        }
24
25        // We are allowed to use one mismatch.
26        bool mismatchUsed = false;
27
28        j = 0;
29
30        // Greedily choose the smallest possible index.
31        for (i = 0; i < n; i++) {
32
33            if (j == m)
34                break;
35
36            // Case 1: Characters already match.
37            if (word1[i] == word2[j]) {
38                ans[j] = i;
39                j++;
40            }
41
42            // Case 2: Use our one allowed mismatch.
43            else if (!mismatchUsed &&
44                     (j == m - 1 || i < last[j + 1])) {
45
46                ans[j] = i;
47                j++;
48                mismatchUsed = true;
49            }
50        }
51
52        // Could not construct a valid sequence.
53        if (j != m) {
54            return {};
55        }
56
57        return ans;
58    }
59};