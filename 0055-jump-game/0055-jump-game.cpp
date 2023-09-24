class Solution {
public:
    bool canJump(vector<int>& nums) {
        //get index size
        //ex: 
        // 2 3 1 1 4 (max jump length)
        // 0 1 2 3 4 (index)
        //
        int minJump = 0;
        for(int i = nums.size()-2; i >= 0; i--) {
            minJump++;
            if(nums[i] >= minJump) {
                minJump = 0; //basically it checks at every iteration if the max jump length is at least bigger than or equal to the min jump length required, if it is, then minJump is set to 0, redoing that cycle until it gets to the beginning of the vector
                //example using array above, we start at nums[3], since nums.size()-2 = 3
                //we increment minJump by 1, then check if nums[3] >= minJump, which in this case is, since 1 = 1
                //next element we check is nums[2], same case as above, so its fine
                //next element is nums[1], here the max jump length is 3 which is greater than minJump which at this point is 1 since it kept getting reset
                //final element is nums[0], same as above so its fine
            }
        }
        if(minJump == 0) { //only returns true if minJump is 0 which it should be set to if it was able to jump to the end
            return true;
        }
        else {
            return false;
        }
        
    
        
    }
    //other solution
    // bool canJump(vector<int>& nums) {
    // int n = nums.size();
    // int maxReach = 0;
    // for (int i = 0; i < n; i++) {
    //     if (i > maxReach) return false; //checks if current index i is greater than maxReach
    //     maxReach = max(maxReach, i + nums[i]);
    // }
    // return true;
    
    
};