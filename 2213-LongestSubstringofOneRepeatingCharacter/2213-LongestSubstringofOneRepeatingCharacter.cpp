// Last updated: 13/08/2026, 09:09:16
1class Solution {
2public:
3
4    struct Node {
5        int len;        // total length
6        int leftLen;    // same character from left
7        int rightLen;   // same character from right
8        int best;       // longest repeating part
9        char leftChar;
10        char rightChar;
11
12        Node() {
13            len = leftLen = rightLen = best = 0;
14            leftChar = rightChar = '#';
15        }
16
17        Node(char c) {
18            len = leftLen = rightLen = best = 1;
19            leftChar = rightChar = c;
20        }
21    };
22
23    vector<Node> tree;
24
25    Node merge(Node a, Node b) {
26        if (a.len == 0) return b;
27        if (b.len == 0) return a;
28
29        Node res;
30
31        res.len = a.len + b.len;
32        res.leftChar = a.leftChar;
33        res.rightChar = b.rightChar;
34
35        res.leftLen = a.leftLen;
36
37        if (a.leftLen == a.len && a.rightChar == b.leftChar)
38            res.leftLen = a.len + b.leftLen;
39
40        res.rightLen = b.rightLen;
41
42        if (b.rightLen == b.len && a.rightChar == b.leftChar)
43            res.rightLen = b.len + a.rightLen;
44
45        res.best = max(a.best, b.best);
46
47        if (a.rightChar == b.leftChar)
48            res.best = max(res.best, a.rightLen + b.leftLen);
49
50        return res;
51    }
52
53    void build(int index, int l, int r, string &s) {
54        if (l == r) {
55            tree[index] = Node(s[l]);
56            return;
57        }
58
59        int mid = (l + r) / 2;
60
61        build(index * 2, l, mid, s);
62        build(index * 2 + 1, mid + 1, r, s);
63
64        tree[index] = merge(tree[index * 2], tree[index * 2 + 1]);
65    }
66
67    void update(int index, int l, int r, int pos, char c) {
68        if (l == r) {
69            tree[index] = Node(c);
70            return;
71        }
72
73        int mid = (l + r) / 2;
74
75        if (pos <= mid)
76            update(index * 2, l, mid, pos, c);
77        else
78            update(index * 2 + 1, mid + 1, r, pos, c);
79
80        tree[index] = merge(tree[index * 2], tree[index * 2 + 1]);
81    }
82
83    vector<int> longestRepeating(string s, string queryCharacters,
84                                 vector<int>& queryIndices) {
85
86        int n = s.size();
87
88        tree.resize(4 * n);
89
90        build(1, 0, n - 1, s);
91
92        vector<int> ans;
93
94        for (int i = 0; i < queryCharacters.size(); i++) {
95
96            int pos = queryIndices[i];
97            char c = queryCharacters[i];
98
99            update(1, 0, n - 1, pos, c);
100
101            ans.push_back(tree[1].best);
102        }
103
104        return ans;
105    }
106};