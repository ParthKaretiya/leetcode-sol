// Last updated: 28/06/2026, 17:20:27
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4     int count = 0;
5     int balance = 0;
6
7     for(char ch :s ){
8        if(ch == 'L'){
9            balance ++;
10        }
11        else{
12            balance --;
13        }
14
15        if(balance == 0){
16            count ++;
17        }
18     }  
19     return count; 
20    }
21};