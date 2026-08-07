// Last updated: 07/08/2026, 13:24:23
1class Solution {
2public:
3    string smallestNumber(string num, long long t) {
4        const auto [primeCount, isDivisible] = getPrimeCount(t);
5        if (!isDivisible)
6            return "-1";
7
8        const unordered_map<int, int> factorCount = getFactorCount(primeCount);
9        if (sumValues(factorCount) > (int)num.length())
10            return construct(factorCount);
11
12        unordered_map<int, int> primeCountPrefix = getPrimeCount(num);
13        int firstZeroIndex = num.find('0');
14        if (firstZeroIndex == (int)string::npos) {
15            firstZeroIndex = num.length();
16            if (isSubset(primeCount, primeCountPrefix))
17                return num;
18        }
19
20        for (int i = (int)num.length() - 1; i >= 0; --i) {
21            const int d = num[i] - '0';
22            primeCountPrefix = subtract(primeCountPrefix, kFactorCounts.at(d));
23            const int spaceAfterThisDigit = (int)num.length() - 1 - i;
24            if (i > firstZeroIndex)
25                continue;
26            for (int biggerDigit = d + 1; biggerDigit < 10; ++biggerDigit) {
27                const unordered_map<int, int> factorsAfterReplacement =
28                    getFactorCount(subtract(subtract(primeCount, primeCountPrefix),
29                                             kFactorCounts.at(biggerDigit)));
30                if (sumValues(factorsAfterReplacement) <= spaceAfterThisDigit) {
31                    const int fillOnes =
32                        spaceAfterThisDigit - sumValues(factorsAfterReplacement);
33                    return num.substr(0, i) +
34                           to_string(biggerDigit) +
35                           string(fillOnes, '1') +
36                           construct(factorsAfterReplacement);
37                }
38            }
39        }
40
41        const unordered_map<int, int> factorsAfterExtension =
42            getFactorCount(primeCount);
43        return string(num.length() + 1 - sumValues(factorsAfterExtension), '1') +
44               construct(factorsAfterExtension);
45    }
46
47private:
48    const unordered_map<int, unordered_map<int, int>> kFactorCounts = {
49        {0, {}},        {1, {}},
50        {2, {{2, 1}}},  {3, {{3, 1}}},
51        {4, {{2, 2}}},  {5, {{5, 1}}},
52        {6, {{2, 1}, {3, 1}}}, {7, {{7, 1}}},
53        {8, {{2, 3}}},  {9, {{3, 2}}}};
54
55    pair<unordered_map<int, int>, bool> getPrimeCount(long long t) {
56        unordered_map<int, int> count{{2, 0}, {3, 0}, {5, 0}, {7, 0}};
57        for (const int prime : {2, 3, 5, 7}) {
58            while (t % prime == 0) {
59                t /= prime;
60                ++count[prime];
61            }
62        }
63        return {count, t == 1};
64    }
65
66    unordered_map<int, int> getPrimeCount(const string& num) {
67        unordered_map<int, int> count{{2, 0}, {3, 0}, {5, 0}, {7, 0}};
68        for (const char d : num)
69            for (const auto& [prime, freq] : kFactorCounts.at(d - '0'))
70                count[prime] += freq;
71        return count;
72    }
73
74    unordered_map<int, int> getFactorCount(const unordered_map<int, int>& count) {
75        const int count8 = count.at(2) / 3;
76        const int remaining2 = count.at(2) % 3;
77        const int count9 = count.at(3) / 2;
78        int count3 = count.at(3) % 2;
79        int count4 = remaining2 / 2;
80        int count2 = remaining2 % 2;
81        int count6 = 0;
82        if (count2 == 1 && count3 == 1) {
83            count2 = 0; count3 = 0; count6 = 1;
84        }
85        if (count3 == 1 && count4 == 1) {
86            count2 = 1; count6 = 1; count3 = 0; count4 = 0;
87        }
88        return unordered_map<int, int>{
89            {2, count2}, {3, count3}, {4, count4}, {5, count.at(5)},
90            {6, count6}, {7, count.at(7)}, {8, count8}, {9, count9}};
91    }
92
93    string construct(const unordered_map<int, int>& factors) {
94        string res;
95        for (int digit = 2; digit < 10; ++digit)
96            res += string(factors.at(digit), '0' + digit);
97        return res;
98    }
99
100    bool isSubset(const unordered_map<int, int>& a,
101                  const unordered_map<int, int>& b) {
102        for (const auto& [key, value] : a)
103            if (b.at(key) < value)
104                return false;
105        return true;
106    }
107
108    unordered_map<int, int> subtract(unordered_map<int, int> a,
109                                      const unordered_map<int, int>& b) {
110        for (const auto& [key, value] : b)
111            a[key] = max(0, a[key] - value);
112        return a;
113    }
114
115    int sumValues(const unordered_map<int, int>& count) {
116        return accumulate(count.begin(), count.end(), 0,
117                           [](int acc, const pair<const int, int>& p) {
118                               return acc + p.second;
119                           });
120    }
121};