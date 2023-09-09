class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < i; j++) {// initially try to swap matrix[0][0] with matrix[0][0], but since that accomplishes nothing, swap matrix[1][0] with matrix[0][1], which, if we use [[1,2,3],[4,5,6],[7,8,9]] as the matrix, 
                //turns it into [[1,4,3][2,5,6][7,8,9]]
                //since 0 < 1 and 1 isnt < 1, increment i again and do another swap
                //this time its matrix[2][0] with matrix[0][2]
                // turns it into [[1,4,7][2,5,6][3,8,9]]
                // 1 < 2 so another swap this time being matrix[2][1] with matrix[1][2]
                //turns it into [[1,4,7][2,5,8][3,6,9]]
                //only thing left to do is to reverse all the elements in the matrix
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int k = 0; k < matrix.size(); k++) {
            reverse(matrix[k].begin(), matrix[k].end());
        }
    }
};