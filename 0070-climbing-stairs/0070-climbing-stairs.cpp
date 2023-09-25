class Solution {
public:
    int climbStairs(int n) {

            //dynamic programming
            if(n <= 2) {
                return n;
            }
            int x = 1;
            int y = 2;
            
            for(int i = 3; i < n; i++) {
                int tmp = y; //done same way as fibonacci
                y += x;
                x = tmp;
            }
            return (x+y);
            
        }
    
}; 