class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> dictionary;
        
        for(auto c : magazine) {
            dictionary[c]++;
        }
        
        for(auto c : ransomNote) {
            if(dictionary.find(c) == dictionary.end() || dictionary[c] <= 0) {
                return false;
            }
            dictionary[c]--;
        }
        return true;
    }
    
};