class Solution {
public:
    int divide(int dividend, int divisor) {
        //multiply divisor by 2 while less than dividend, and add 2^(n) to the answer, repeat process
        //bitwise left shift to achieve this multiplication: each time we shift 5 by 1, we multiply it by 2:
        if(dividend == divisor) { //if its number divided by itself
            return 1;
        }
        
        bool isPositive = (dividend < 0 == divisor < 0); //makes sure both dividend and divisor are the same sign, because positive is only when both signs are the same ex: if dividend is pos and divisor is pos, false == false which is true, meaning positive number, etc.
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int ans = 0;
        while (a >= b) { //while dividend is greater than or equal to divisor
            short q = 0;
            while(a > (b <<(q+1))) {//b << (q + 1) performs a left bit shift operation on b. It effectively multiplies b by 2^(q+1)
                q++;
            }
            
            ans += (1<<q); //It shifts the binary representation of the number 1 to the left by q positions. In other words, it calculates 2 raised to the power of q
            
            a = a - (b<<q); // In other words, it calculates b times 2 raised to the power of q. This is the value of b multiplied by the current quotient digit.
        }
        if(ans == (1<<31) and isPositive) { // 1<<31 == 2^31, dont really understand this part, since we did abs, we always get positive result
            return INT_MAX;
        }

        return isPositive ? ans : -ans;
        
        
    }
};