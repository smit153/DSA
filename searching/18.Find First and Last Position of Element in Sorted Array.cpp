class Solution {
public:
  
    int first_occurrence(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] >= target)
                r = mid;
            else
                l = mid + 1;
        }
        if(nums[l] != target)
            return -1;
        return l;
    }
    
    int last_occurrence(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r) {
            int mid = l + (r - l + 1) / 2;
            if(nums[mid] <= target)
                l = mid;
            else
                r = mid - 1;
        }
        if(nums[l] != target)
            return -1;
        return l;
    }
  
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        if(nums.empty())
            return res;
        res[0] = first_occurrence(nums, target);
        res[1] = last_occurrence(nums, target);            
        return res;
    }
};