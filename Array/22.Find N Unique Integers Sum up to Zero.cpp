class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> Ans(n);
        for (int i = 0; i < n; ++i)
            Ans[i] = i * 2 - n + 1;
        return Ans;
    }
};