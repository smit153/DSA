class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int GCD=nums[0];
        for(int i=1;i<nums.size();i++){
            GCD=gcd(GCD,nums[i]);
        }
        if(GCD==1)
            return true;
    return false;    
    }
};
