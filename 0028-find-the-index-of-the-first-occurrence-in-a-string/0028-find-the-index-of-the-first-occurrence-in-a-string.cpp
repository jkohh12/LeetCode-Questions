class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.size();i++) {
            if(haystack[i] == needle[0]) {
                if(haystack.substr(i, needle.size()) == needle){
                    return i;
                }
        
            }
        }
        return -1;
    }
    
    //another way to do
        // size_t found = haystack.find(needle);
        // if(found != string::npos) {
        //     return found;
        // }
        // else {
        //     return -1;
        // }
};