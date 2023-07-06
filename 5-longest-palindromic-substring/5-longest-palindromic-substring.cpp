class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1) {
            return s;
        }
        int max_len = 1;
        int start = 0;
        int end = 0;

        //odd length

        for (int i = 0; i < s.size()-1; i++) {
            int l = i;
            int r = i;
            while(l >= 0 && r < s.size()) {
                if (s[l] == s[r]) {
                    l--;
                    r++;
                }
                else {
                    break;
                }
                int len = r - l - 1;
                if(len > max_len) {
                    max_len = len;
                    start = l+1;
                    end = r-1;
                }
            }
        }


        //even length
        for (int i = 0; i < s.size()-1; i++) {
            int l = i;
            int r = i+1;
            while(l >= 0 && r < s.size()) {
                if (s[l] == s[r]) {
                    l--;
                    r++;
                }
                else {
                    break;
                }
                int len = r - l - 1;
                if(len > max_len) {
                    max_len = len;
                    start = l+1;
                    end = r-1;
                }
            }
        }

        return s.substr(start,max_len);

    }

};