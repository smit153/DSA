class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int>vec(1001,0);
        for(int i=0;i<nums.size();i++)
        {
            vec[nums[i]]++;
        }
        for(int i=999;i>=0;i--)
        {
            vec[i]+=vec[i+1];
            if(i==vec[i])
            {
                return i;
            }
        }
        return -1;
        
    }
};