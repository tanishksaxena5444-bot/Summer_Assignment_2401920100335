class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size(),n=mat[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1,i,j;
        while(srow<=erow && scol<=ecol){
            for(j=scol;j<=ecol;j++){
                ans.push_back(mat[srow][j]);
            }
            for(i=srow+1;i<=erow;i++){
                ans.push_back(mat[i][ecol]);
            }
            for(j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                ans.push_back(mat[erow][j]);
            }
            for(i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(mat[i][scol]);
            }
            srow++;erow--;scol++;ecol--;
        }
        return ans;
    }
};