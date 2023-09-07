class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) {
            return "1"; //base case
        }
        //starts at n = 4, and goes all the way down to base case, where n=1 which returns 1, and string s is evaluated to 1, so then we get one 1, (returned as "11"), meaning the next s = 11, which has size 2, etc. 
        //this slowly builds up the final string we need
        string s = countAndSay(n-1);
        string ans = "";
        for(int i = 0; i < s.size(); i++) {
            int count = 1;
            while(i < (s.size()-1) && (s[i] == s[i+1])) {
                i++;
                count++; //counts how many consecutive characters are the same
            }
            ans.append(to_string(count) + s[i]); //append is like push for strings, ex: three consectutive 2's, is 32 
        }
        return ans;
    }
    
};