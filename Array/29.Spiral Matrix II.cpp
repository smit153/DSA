class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > matrix( n, vector<int>(n) );
        int k=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1,bottom=k-1,top=0;
        int direction=1;
        int A=1;
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++) 
                    matrix[top][i]=A++;
                direction=2;
                top++;
            }
            
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) 
                    matrix[i][right]=A++;
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) 
                    matrix[bottom][i]=A++;
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) 
                    matrix[i][left]=A++;
                direction=1;
                left++;
            }
        }
        return matrix;
        
    }
};
    