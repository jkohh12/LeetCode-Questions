class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int check;
        for(int i = 0; i < ransomNote.length(); i++) {
            check = 0;
            for(int j = 0; j < magazine.size(); j++) {
                if(ransomNote[i] == magazine[j]) {
                    check++;
                    magazine[j] = 64; //replace current magazine value with value that ransomNote can't be equal to (@)
                    break;
                }

            }
            if(check == 0) {
                return false;
            }
        }
        return true;
    }
};