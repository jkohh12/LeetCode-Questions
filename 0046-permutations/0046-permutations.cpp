class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() <= 1) {
            return {nums};
        }
        vector<vector<int>> result; //store permutations
        for(int i = 0; i < nums.size(); i++) {
            vector<int> v(nums.begin(), nums.end()); //copying current nums vector
            v.erase(v.begin() + i); //erasing element at i of vector v
            auto res = permute(v); // recursively compute permutations of remaining elements, after ith element is removed
            //returns vector<vector<int>> type
            for(int j = 0; j < res.size(); j++) { //for each element in res, insert element at beginning and add to result vector
                vector<int> _v = res[j];
                _v.insert(_v.begin(), nums[i]);
                result.push_back(_v);
            }
        }
        return result;
    }
};