class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        int max = 0;
        set <char> set;

        while(start < s.length()) {
            auto it = set.find(s[start]);

            if(it == set.end()) {
                if(start-end+1 > max) {
                    max = start-end+1;

                }
                set.insert(s[start]);
                start++;
            }

            else {
                set.erase(s[end]);
                end++;
            }

        }

        return max;

    }
};