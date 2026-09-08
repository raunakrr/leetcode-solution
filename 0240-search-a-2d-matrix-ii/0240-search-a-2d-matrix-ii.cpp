class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowIndex=0;
        int colIndex=col-1;
        while(rowIndex<row && colIndex>=0){
            int element=matrix[rowIndex][colIndex];
            if(element==target) return true;
            else if(element < target) rowIndex++; // element can't exist in the same row so row++
            else colIndex--; // element can't exist in that element so col--
        }
        return false;
    }
};