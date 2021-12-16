class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i=0; i<A.size(); i++) {
            reverse(A[i].begin(), image[i].end());
            for (int j=0; j<A[i].size(); j++) {
                image[i][j] ^= 0x1;
            }
        }
        return image;
    }
};