class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

    for (const string& str : strs) {
        // Create a frequency count of characters
        vector<int> charCount(26, 0);
        for (char c : str) {
            charCount[c - 'a']++;
        }

        // Convert the frequency count into a string key
        string key = "";
        for (int count : charCount) {
            key += "#" + to_string(count);
        }

        // Use the key to group anagrams
        anagramMap[key].push_back(str);
    }

    // Prepare the result vector
    vector<vector<string>> result;
    for (auto& pair : anagramMap) {
        result.push_back(pair.second);
    }

    return result;
}
        
    
};