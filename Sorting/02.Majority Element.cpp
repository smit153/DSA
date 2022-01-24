class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
        
        // nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());
        // return nums[nums.size() / 2];
    }
};