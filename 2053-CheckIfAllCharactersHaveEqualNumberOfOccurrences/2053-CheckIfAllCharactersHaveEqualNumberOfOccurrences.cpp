// Last updated: 7/13/2026, 1:17:30 PM
class Solution {
public:
    bool areOccurrencesEqual(string s) {

        unordered_map<char , int> m1;

        for(char c : s){
            m1[c]++;
        }

        set<int> s1;

        for(auto it : m1){
            s1.insert(it.second);
        }

        return s1.size() == 1;
    }
};