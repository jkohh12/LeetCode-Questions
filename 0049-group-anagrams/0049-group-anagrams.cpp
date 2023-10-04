class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1) {
            return {{strs[0]}};
        }
        
        vector <vector<string>> ans;
        unordered_map <string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++) {
            string str = strs[i]; //holds onto string value before it is sorted
            sort(strs[i].begin(), strs[i].end()); //sorts the string abc order
            mp[strs[i]].push_back(str); //at the index strs[i], which is now sorted, push back the oirignal string value before it was sorted
            
        }
        
        for(auto i : mp) { //iterate through every element of mp with i
            ans.push_back(i.second);
        }
        return ans;
        
    }
};