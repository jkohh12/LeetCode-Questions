class Solution {
public:
    int reverse(int x) {
        int upperLimit = (pow(2,31) - 1)/10;
        int lowerLimit = -(pow(2,31)/10);
        
        int ans = 0;
        
        while(x != 0) {
            int lastDigit = x % 10; //used to get last digit of a number ex: 12 % 10 equals 2
            
            if(ans <= upperLimit && ans >= lowerLimit) { //check if ans will be in integer range
                int temp = ans * 10 + lastDigit; //get the ans and mult by 10 and add with last digit of number, incrementally adding number in reverse order
                ans = temp;
                x /= 10; //used to reduce original number gradually
            }
            else {
                return 0;
            }
        }
        return ans;
    }
};