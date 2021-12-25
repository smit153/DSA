class Solution {
public:
    void rotate(vector<int>& nums, int k) { //lets say [1,2,3,4,5,6,7]
        int n=nums.size(),temp;
        k=k%n; // If rotation is greater than array size
        for(int i=0;i<k;i++){
            temp=nums.back();
            nums.pop_back();
            nums.insert(nums.begin(),temp);
        }
    }
};