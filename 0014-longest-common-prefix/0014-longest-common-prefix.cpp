class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end()); // sorts by alphabet, and also length of string
        string first = strs[0];
        string last = strs[strs.size()-1];
        
        for(int i =0; i < min(first.size(),last.size()); i++) { //compares first element in vector to last, and if they dont match in any of the elements it returns ans
            if(first[i] == last[i]) {
                ans += first[i];
            }
            else {
                return ans;
            }
        }
        return ans;
        
    }
};