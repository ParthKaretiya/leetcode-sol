// Last updated: 24/04/2026, 09:56:28
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i =0;
        int j = s.size()-1;
        while(i<j){
            swap(s[i] , s[j]);
            i++;
            j--;
        }
    }
};