class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> myMap;
        myMap = {{'I',1}, {'V',5}, {'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum = 0;
        for(int i = 0; i < s.size(); i++ ) {
            if(myMap[s[i]] < myMap[s[i+1]]) { //if the string input is III myMap[s[i]] grabs the value s[i] which would be I if i = 0, and then does myMap[I], meaning it = 1
                sum -= myMap[s[i]];
            }
            else {
                sum += myMap[s[i]];
            }
        }
        return sum;
    }
};