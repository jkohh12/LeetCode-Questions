class Solution {
public:
    int search(vector<int>& nums, int target) {
        //find which part is the stricly increasing part, one side HAS to be strictly increasing
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int mid;
        
        while(left <= right) {
            mid = (left+right)/2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] >= nums[left])  {//check if left side is having uniformly increasing part
                if(target <= nums[mid] && target >= nums[left]) { //if the target is within uniformly increasing left part
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            else {
                if(target >= nums[mid] && target <= nums[right]) {
                    left = mid+1;
                }
                else {
                    right = mid-1;
                }
            }
        }
        return -1;
    }
};