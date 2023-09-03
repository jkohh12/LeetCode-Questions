class Solution {

private:
    void generate(string s, int open, int close, vector<string> &ans) {
        if(open == 0 && close == 0) {
            ans.push_back(s);
            return;
        }
        
        if(open > 0) {
            generate(s + "(", open-1,close,ans);
            
        }
        if(open < close) { //can only use closing parentheses when open is less than close to prevent (()))(,
            generate(s + ")", open, close-1, ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("", n, n ,ans);
        return ans;
    }
};