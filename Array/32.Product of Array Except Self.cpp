class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums), suf(nums), ans(size(nums));
        partial_sum(begin(pre), end(pre), begin(pre), multiplies<int>());       
        partial_sum(rbegin(suf), rend(suf), rbegin(suf), multiplies<int>());    
        for(int i = 0; i < size(nums); i++)
            ans[i] = (i ? pre[i-1] : 1) * (i+1 < size(nums) ? suf[i+1] : 1);
        return ans;
    }
};