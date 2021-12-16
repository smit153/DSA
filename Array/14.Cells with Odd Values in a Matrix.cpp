class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
        vector<vector<int>> arr(m,vector<int> (n));
        for(auto it:indices)
        {
            for(int i=0;i<n;i++)
            {
                arr[it[0]][i]++;
            }
            for(int i=0;i<m;i++)
            {
                arr[i][it[1]]++;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]%2!=0)
                    count++;
            }
        }
        return count;
    }
};