class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> arr;
        int n = s.size(), m = p.size();
        if (m > n) return arr;
        vector<int> freq1(26, 0), freq2(26, 0);

        for (int i = 0; i < m; i++) {
            freq1[p[i] - 'a']++;
            freq2[s[i] - 'a']++;
        }

        if (freq1 == freq2)
            arr.push_back(0);

        for (int i = m; i < n; i++) {
            freq2[s[i] - 'a']++;           // add new character
            freq2[s[i - m] - 'a']--;       // remove old character

            if (freq1 == freq2)
                arr.push_back(i - m + 1);
        }

        return arr;
    }
};-