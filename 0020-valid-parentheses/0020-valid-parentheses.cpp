class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto c : s ){
            if(c == '(' || c == '{' || c == '[') { //if current element is opening bracket, push it onto stack
                st.push(c);
            }
            else {
                if(st.empty() || //closing bracket doesnt match corresponding opening bracket at top of stack
                  (c == ')' && st.top() != '(') || 
                  (c == '}' && st.top() != '{') ||
                  (c == ']' && st.top() != '[')) {
                    return false;
                }
                
                st.pop();
            }
        }
        return st.empty();
    }
};