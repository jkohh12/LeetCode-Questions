class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //USES BFS
        vector<string> phone {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(digits.empty()) {
            return {};
        }
        
        queue<string> q;
        vector<string> ans;
        
        q.push(""); //intially empty string pushed in
        
        while(!q.empty()) {
            string curr = q.front(); //front of queue
            q.pop(); //pop queue, this is how it builds everything after the latter "a"
            
            if(curr.length() == digits.length()) { //checks if combination is equal length to digits, if it is, that means combination has been formed
                ans.push_back(curr);
            }
            else {
                string s = phone[digits[curr.length()]- '0']; //This line retrieves the string of letters corresponding to the next digit to be added to the combination. It uses the length of the current combination to find the digit index from the digits string. Then, it uses that digit index to access the corresponding string of letters from the phone vector.
                
                for(auto x: s) {
                    q.push(curr + x); 
                }
            }
        }
        return ans;
        
        
        
        
        
    }
};
