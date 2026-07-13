// Last updated: 7/13/2026, 1:22:02 PM
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<long long> s;

        for (int num : nums) {
            s.insert(num);
            if (s.size() > 3)
                s.erase(s.begin());
        }

        if (s.size() == 3)
            return *s.begin();

        return *s.rbegin();
    }
};