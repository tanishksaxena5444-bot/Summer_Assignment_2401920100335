class Solution {
public:
void solve(int n, int ob,int cb,vector<char> &nums,vector<string> &ans){
    if(ob==n && cb==n){
      ans.push_back(string(nums.begin(), nums.end()));
      return;
    }
    if(ob<n){
        nums.push_back('(');
        solve(n,ob+1,cb,nums,ans);
        nums.pop_back();
    }
    if(cb<ob){
        nums.push_back(')');
        solve(n,ob,cb+1,nums,ans);
        nums.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        vector<char>nums;
        solve(n,0,0,nums,ans);
        return ans;
    }
};