class Solution {
public:
    int myAtoi(string s) {
        int upperLimit = (pow(2,31) - 1)/10;
        int lowerLimit = -(pow(2,31)/10);
        
        int ans = 0;
        int temp = 0;

        int sign = 1;
        int index = 0;
        
        
        for(int i = index; i < s.size(); i++) {
            if(s[index] == ' ') {
                index++;
            }
        }
        if(s[index] == '-' || s[index] == '+') {
            if(s[index] == '-') {
                sign = -1;
            }
            else {
                sign = 1;
            }
            index++;    
        }
        
        while(index < s.size() && (s[index] >= '0' && s[index] <= '9')) {

            int digit = (s[index] - '0') * sign; //done to convert string into digit
            if(sign == 1  && (ans > INT_MAX/10 ||(ans==INT_MAX/10 && digit>INT_MAX%10))) {
                return INT_MAX;    
            }
            if(sign == -1 && (ans < INT_MIN/10 || (ans==INT_MIN/10 && digit<INT_MIN%10))) {
                return INT_MIN;
            }

            ans = ans * 10 + digit;
                
            index++;


        }
        // if(neg == true) {
        //     ans *= -1;
        // }
        return ans;
        
    }
};