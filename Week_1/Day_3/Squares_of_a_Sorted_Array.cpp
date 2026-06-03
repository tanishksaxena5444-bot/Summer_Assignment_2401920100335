class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a=nums[i]*nums[i];
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};