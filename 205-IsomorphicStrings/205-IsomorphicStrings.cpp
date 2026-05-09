// Last updated: 09/05/2026, 10:09:05
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        
5        map<char, char> mp;
6
7        for(int i = 0; i < s.size(); i++) {
8
9            // mapping already exists
10            if(mp.count(s[i])) {
11
12                // wrong mapping
13                if(mp[s[i]] != t[i]) {
14                    return false;
15                }
16
17            } else {
18
19                // check if t[i] already mapped
20                for(auto it : mp) {
21                    if(it.second == t[i]) {
22                        return false;
23                    }
24                }
25
26                // create mapping
27                mp[s[i]] = t[i];
28            }
29        }
30
31        return true;
32    }
33};