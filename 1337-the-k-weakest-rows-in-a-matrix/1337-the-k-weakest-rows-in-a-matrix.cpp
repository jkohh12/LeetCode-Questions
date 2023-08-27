class Solution {
private: 
    int bSearch(vector<int>& v)  {
        int left = 0,right=v.size()-1, mid;
        //use bSearch to count # of 1's
        //use the index of where last 1 is + 1
        while(left <= right) { //basically if we find a 1 at mid index, that means we wanna set left to mid + 1, since that index is the number of 1's that exist in the vector
            mid = (left+right)/2;
            if(v[mid] == 1) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
            
        }
        return left;
    }
    
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,int>> vp;
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            count = bSearch(mat[i]);
            vp.push_back({count,i});
        }
        
        sort(vp.begin(),vp.end());
        
        vector<int> ans;
        
        for(int i = 0; i < k; i++) {
            ans.push_back(vp[i].second);
        }

        return ans;
        
    }
};