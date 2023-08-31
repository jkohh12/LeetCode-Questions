class Solution {
public:
    int maxArea(vector<int>& height) {
        //length n for vector height, each height represents a possible side of container, find two indexes that can form container with most water
        //smaller height will always be highest pt because no slanting
        
        //vector<int> container;
        int maxIndex = 0;
        int left = 0;
        int right = height.size()-1;
        
        while(left < right) {
            
            int heightCalc = (height[left] < height[right]) ? height[left] : height[right]; //if height at left is less than height at right, we use height at left other wise height at right, always use smaller height
            
            int width = right-left;
            
            int area = width * heightCalc;
            
            maxIndex = max(area, maxIndex);
            if(height[left] < height[right]) { //wanna use height with highest possible height to get most water in container
                left++;
            }
            else if(height[left] > height[right]) {
                right--;
            }
            else {
                left++;
                right--;
            }
        }
        return maxIndex;
        
            

            //max calc
            
        
 
        
        
    }
};