class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> m(26,0);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            m[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            m[t[i]-'a']--;
        }
        char i=0;
        while(i<=25){
            if(m[i]!=0)
                return false;
            i++;
        }
        return true;