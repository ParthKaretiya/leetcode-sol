// Last updated: 01/06/2026, 11:15:56
1class StockSpanner {
2public:
3    stack<pair<int, int>> st;
4
5    StockSpanner() {
6        
7    }
8    
9    int next(int price) {
10        int span = 1;
11
12        while (!st.empty() && st.top().first <= price) {
13            span += st.top().second;
14            st.pop();
15        }
16
17        st.push({price, span});
18
19        return span;
20    }
21};
22
23/**
24 * Your StockSpanner object will be instantiated and called as such:
25 * StockSpanner* obj = new StockSpanner();
26 * int param_1 = obj->next(price);
27 */