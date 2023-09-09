class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int i = 0;
        int j = nums.size()-1;
        
        int start = -1;
        int end = -1;
        //binary search
        while(i <= j) {
            int mid = (i+j)/2;
            if(nums[mid] == target) {
                int temp = mid; //keep track of where mid is, since we are changing it in next line
                while(mid > 0 && nums[mid-1] == nums[mid]) { //iterating left side of mid until target value is found
                                                          //basically if nums[mid] == target, we found the target, now found all numbers before that are also target, and mark the first one as the start.
                    mid--;
                }
                start = mid;
                while(temp < nums.size()-1 && nums[temp+1] == nums[temp]) { //temp is equal to mid, basically doing the same thing as before, but this time go to the right and mark the last element equal to target as end
                    temp++;
                }
                end = temp;
                
                ans.push_back(start);
                ans.push_back(end);
                return ans;
                //basically if the target is found, start at that mid point, and check outwards to find all elements that are equal to target and mark the first and last and start/end.
            }
            else if(nums[mid] > target) { //same as normal binary Search, if the target is less that nums[mid] it means we need to check the left side, so we set j, which points to end of vector, to j = mid - 1 to only search left side
                j = mid - 1;
            }
            else { //same idea as before
                i = mid + 1; 
            }
            
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
        //if the targets are never found, we get this situation
        
   
  
    }
};