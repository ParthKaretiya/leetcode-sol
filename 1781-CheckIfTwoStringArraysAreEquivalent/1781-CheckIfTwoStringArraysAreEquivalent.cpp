// Last updated: 21/05/2026, 11:08:56
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string r1 = "";
        string r2 = "";

        for(string x : word1){
            r1 = r1+x;
        }
       

          for(string x : word2){
            r2=r2+x;
        }
       

        return r1 == r2;
    }
};