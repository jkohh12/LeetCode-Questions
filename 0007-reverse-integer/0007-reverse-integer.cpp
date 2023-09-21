class Solution {
public:
    int reverse(int x) {
        int upperLimit  = (pow(2, 31) - 1)/10;
        int lowerLimit = -(pow(2,31))/10;
        
        int ans = 0;
        while(x != 0) {
            int lastDigit = x % 10;
            if(ans >= lowerLimit && ans <= upperLimit) {
                int temp = ans * 10 + lastDigit;
                ans = temp;
                x /= 10;
            }
            else {
                return 0;
            }
        }
        
        return ans;
        
    }
};