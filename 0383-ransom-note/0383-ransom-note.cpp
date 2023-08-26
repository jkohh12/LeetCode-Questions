class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> dictionary;
        
        for(auto c : magazine) { //loops through characters of magazine and build unordered map that counts occurence of each character
            dictionary[c]++;
        }
        
        for(auto c : ransomNote) { //loops through characters in ransomNote 
            if(/* dictionary.find(c) == dictionary.end() || */dictionary[c] <= 0) { //dictionary.find(c) == dictionary.end() is edge case, but main thing is if dictionary[c] <= 0, which would mean that the character isnt present, meaning false
                return false; 
            }
            dictionary[c]--; //if it does exist, it means that dictionary[c] >= 1
        }
        return true;
    }
    
};