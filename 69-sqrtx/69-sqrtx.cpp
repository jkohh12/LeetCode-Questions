class Solution {
public:
    int mySqrt(int x) {
    //use binary search
    if(x == 0 || x == 1) {
        return x;
    }
    
    int start = 1;
    int end = x;
    int mid;
    //binary search
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        long long square = static_cast<long long>(mid) * mid;
        if(square > x) {
            end = mid - 1; //cutting down the search range by mid - 1 since we know the mid value squared is not the x value
            
        }
        else if (square == x) {
            return mid;
        }
        else {
            start = mid + 1; //otherwise square of mid val is less than x, so move start to the right (mid + 1)
        }
        
    }
        return static_cast<int>(std::round(end));
    
    }
    
};