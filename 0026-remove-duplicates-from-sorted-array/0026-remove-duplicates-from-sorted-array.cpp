class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) { //unique number found
                nums[ans] = nums[i]; //use ans index, ans only ever increments when nums[i] != nums[i-1] meaning we can basically use it to completely erase duplicates
                ans++;
            }
        }
        return ans;
        
    }
};