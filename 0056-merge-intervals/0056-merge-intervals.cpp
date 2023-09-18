class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        vector<vector<int>> result;
        //base case when threr are no intervals
        if(interval.size()==0)return result;
        //sort takes O(nlogn) time
        sort(interval.begin(),interval.end());
        //insert the the the first interval in the result
        result.push_back(interval[0]);
        int j=0;
        //Traverse the whole vector .Takes O(n) time
        for(int i=1;i<interval.size();i++)
        {
            //if intervals are overlapping
            if(result[j][1]>=interval[i][0]) result[j][1]=max(result[j][1],interval[i][1]); //updates end point of the last merged interval to be the maximum of its current end point and the end point of the current interval
            //else they are not overlapping
            else
            {
                j++;
                result.push_back(interval[i]);
            }
        }
        return result;
    }
};