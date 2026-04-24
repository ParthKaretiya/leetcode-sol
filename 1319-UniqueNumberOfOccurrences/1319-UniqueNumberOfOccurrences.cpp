// Last updated: 24/04/2026, 09:56:21
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> m;
        for(int nums : arr){
            m[nums]++;
        }
        unordered_set<int>s;
        for(auto &p : m){
            s.insert(p.second);
        }

        return m.size() == s.size();
        
    }
};