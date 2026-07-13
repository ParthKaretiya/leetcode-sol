// Last updated: 7/13/2026, 1:17:15 PM
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        set<int> s1, s2, s3;

        for(int x : nums1){
            s1.insert(x);
        }

        for(int x : nums2){
            s2.insert(x);
        }

        for(int x : nums3){
            s3.insert(x);
        }

        set<int> ans;

        for(int x : s1){

            if(s2.find(x) != s2.end() || s3.find(x) != s3.end()){
                ans.insert(x);
            }
        }

        for(int x : s2){

            if(s1.find(x) != s1.end() || s3.find(x) != s3.end()){
                ans.insert(x);
            }
        }

        vector<int> result;

        for(int x : ans){
            result.push_back(x);
        }

        return result;
    }
};