class Solution {
private:
    int bsearch(vector<int>& v){
        int left = 0, right=v.size()-1, mid;
        while(left<=right){
            mid = left + (right - left)/2;
            
            if(v[mid]==1){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
        return left;
    }
    
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,int>> vp;
        int count = 0;
        
        for(int i=0; i<n; ++i){
            count = bsearch(mat[i]);
            vp.push_back({count, i});
        }
        
        sort(vp.begin(), vp.end()); // sort first by count and then by index 
        
        vector<int> ans;
        for(int i=0; i<k; ++i) ans.push_back(vp[i].second);  // pick the first kth as they are the weakest after sorting 
        return ans;
    }
};