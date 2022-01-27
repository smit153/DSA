class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i=0,ans=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            ans+=nums[i];
            i=i+2;
        }
        return ans;
    }
};