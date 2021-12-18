class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int globalMax = INT_MIN, max = 0;
 
    for (int i = 0; i < nums.size(); i++)
    {
        max = max + nums[i];
        if (globalMax < max)
            globalMax = max;
 
        if (max < 0)
            max = 0;
    }
    return globalMax;
    }
};