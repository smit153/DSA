class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum=sum+mat[i][i]+mat[i][n-1-i];
        }
        if(n%2==1)
            sum-=mat[(n-1)/2][(n-1)/2];
        return sum;
    }
};