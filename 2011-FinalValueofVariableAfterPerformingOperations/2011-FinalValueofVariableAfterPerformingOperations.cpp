// Last updated: 15/05/2026, 11:58:03
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        
5        int x = 0;
6
7        for(string op : operations){
8
9            if(op == "++X" || op == "X++"){
10                x++;
11            }
12            else{
13                x--;
14            }
15        }
16
17        return x;
18    }
19};