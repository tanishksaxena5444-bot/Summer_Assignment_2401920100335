class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        vector<vector<int>> ans(r, vector<int>(c));

        for (int i=0;i<m*n;i++){
            int a=i/c;
            int b=i%c;
            int c=i/n;
            int d=i%n;
            ans[a][b]=mat[c][d];
        }
        return ans;
    }
};