class Solution {
private:
    int calcBank(vector<int> &v) {
        int ans = 0;
        for(int i = 0; i < v.size(); i++) {
            ans += v[i];
        }
        return ans;
    }
    
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        //accounts[i][j] = amt of money ith customer has in jth bank
        int max = 0;
        
        for(int i = 0; i < accounts.size();i++) {
            if(max < calcBank(accounts[i])) {
                max = calcBank(accounts[i]);
            }
        }
        
        return max;
    }
};