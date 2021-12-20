class Solution {
public:
        void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> cor;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                   cor.push_back({i,j});
                }
            }
        }
        for(int i=0;i<cor.size();i++)
        {
            int x=cor[i].first;
            int y=cor[i].second;
            int row=0;
            int col=0;
            while(row<m)
            {
                matrix[row][y]=0;
                row++;
            }
            while(col<n)
            {
                matrix[x][col]=0;
                col++;
            }
        }
    }
};