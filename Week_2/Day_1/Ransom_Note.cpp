class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<int,int> mp;
        for(int num:magazine){
            mp[num]++;
        }
        for(int i:ransomNote){
            if(mp[i]==0){
                return false;
            }
          mp[i]--;
        }
        return true;
    }
};