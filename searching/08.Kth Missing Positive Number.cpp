class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans=0,i=0,n=0,c=0;
        while(c!=k){
            i++;
            if(n<arr.size()&&arr[n]==i) n++;
            else {ans = i;c++;}
        }
        return ans;
    }
};