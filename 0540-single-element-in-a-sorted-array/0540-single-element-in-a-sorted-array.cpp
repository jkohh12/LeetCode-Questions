class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //brute force approach
//         if(nums.size() == 0) {
//             return -1;
//         }
//         if(nums.size() == 1) {
//             return nums[0];
//         }
//         int i = 0;
        
//         while(i < nums.size()-1) {
//             if(nums[i] != nums[i+1]) {
//                 return nums[i];
//             }
            
//             i += 2;
//         }
//         return nums[i]; //if its at an odd index it breaks out and returns here
        //basically compare index with index +1 and if they are equal increment index by 2 and repeat
        //this is in O(N), but we want O(logn)
        
        
        //O(logn) approach
        //first occurence is at even index, odd occurence is at odd index
        int high = nums.size()-1;
        int low = 0;
        int mid;
        
        //Boundary Checks
        if(high == 0) {
            return nums[0];
        }
        else if(nums[0] != nums[1]) {
            return nums[0];
        }
        else if(nums[high] != nums [high - 1]) {
            return nums[high];
        }
        
        while (low <= high) {
            mid = low + (high - low)/2;
            if(nums[mid] != nums[mid + 1] && nums[mid] != nums[mid-1]) { //check if mid is not equal to one before and one after
                return nums[mid];
            }
            if(((mid % 2) == 0 && nums[mid] == nums[mid + 1]) || 
               ((mid % 2) == 1 && nums[mid] == nums[mid-1])) { //so if mid is even and the index after it equals it, then we check right side, if its odd and index before it equals it, then we also check right since its in order
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
        

        
    }
};