class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int maxi = INT_MIN;
        
        // min_val will keep track of minimum value of array
        
        int min_val = prices[0];
        
        for(int i = 1; i < n; i++)
        {
            // update the maxi
            
            maxi = max(maxi, prices[i] - min_val);
            
            // update the min_val
            
            min_val = min(min_val, prices[i]);
        }
        
        return maxi >= 0 ? maxi : 0;
    }
 
    
};