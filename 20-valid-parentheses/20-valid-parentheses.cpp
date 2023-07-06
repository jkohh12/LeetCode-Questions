class Solution {
public:
    bool isValid(string s) {
        stack<char> stk; 
        for(char c: s) { // It iterates over each element in a sequence or container s, assigning each element to the variable c one at a time.
            if(c == '(' || c == '{' || c == '[') {
                stk.push(c);
            }
            else {
                if(stk.empty()) {
                    return false;
                }
                if (c == ')' && stk.top() == '(') {
                    stk.pop();
                }
                else if(c == '}' && stk.top() == '{') {
                    stk.pop();
                }
                else if(c == ']' && stk.top() == '[') {
                    stk.pop();
                }
                else {
                    return false;
                }
            }
        }
        return stk.empty(); // returns a boolean value indicating whether the stack stk is empty or not.
    }
};