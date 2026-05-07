// Last updated: 07/05/2026, 19:46:31
1#include <unordered_set>
2using namespace std;
3
4class Solution {
5public:
6    bool containsDuplicate(vector<int>& nums) {
7      unordered_set<int> s;
8      for(int num : nums){
9        if(s.count(num))
10        return true;
11
12        s.insert(num);
13      }
14      return false;
15    }
16};