class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> dictionary;
        
        for(auto c : magazine) { //loops through characters of magazine and build unordered map that counts occurence of each character
            dictionary[c]++;
        }
        
        for(auto c : ransomNote) { //loops through characters in ransomNote 
            if(/* dictionary.find(c) == dictionary.end() || */dictionary[c] <= 0) { //
                return false;
            }
            dictionary[c]--;
        }
        return true;
    }
    
};