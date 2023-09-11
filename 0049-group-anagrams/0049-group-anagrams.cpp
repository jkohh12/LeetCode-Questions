class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1) {
            return {{strs[0]}};
        }
        vector <vector<string>> ans;
        unordered_map <string, vector<string>> M;
        for(int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); //sorts in lexicographical order
            M[strs[i]].push_back(str); //key is strs[i], and unsorted str is pushed into M
            //unordered map contains groups of anagrams, where keys are the sorted strings, and values are vectors of original unsorted strings that are anagrams of each other.
        }
        
        for(auto i : M) {
            
            ans.push_back(i.second);
            
        }
        return ans;
    }
};