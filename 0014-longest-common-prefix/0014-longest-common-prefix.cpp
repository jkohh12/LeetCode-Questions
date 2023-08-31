class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end()); // sorts by alphabet, and also length of string
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];
        for(int i = 0; i < min(first.size(),last.size()) ; i++) {
            if(first[i] != last[i]) { //compares first element in vector to last, and if they dont match in any of the elements it returns ans
                return ans;
            }
            ans += first[i]; //adding to ans, which is what is common prefix among the strings
        }
        return ans;
        
    }
};