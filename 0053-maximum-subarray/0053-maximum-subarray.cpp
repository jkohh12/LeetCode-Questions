class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalMax = nums[0];
        int currMax = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            currMax = max(currMax + nums[i], nums[i]); //sets currMax to max of currMax + nums[i] and nums[i]
            globalMax = max(globalMax, currMax); //compares currMax to global Max and sets whatever is higher to the new globalmax
        }
        return globalMax;
        
    }
};