class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int maxLength = 0;
        int j = 0;
        map <char, int> dict;
        
        for(int i = 0; i < s.size(); i++) {
            dict[s[i]]++; //if the string is abcabc, then on the first iteration, we map to [a:1] since we have 1 a
            length++;
            while(dict[s[i]] > 1) { //while the number of letters  is greater than 1
                dict[s[j]]--;
                length--;
                j++;
            }
            maxLength = max(maxLength, length);
        }
        
        return maxLength;
        
    }
};