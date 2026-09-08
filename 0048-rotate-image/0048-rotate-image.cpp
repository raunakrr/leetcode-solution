class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){ //or j=0;j<i ,swapping elements along diagonal
                swap(matrix[i][j],matrix[j][i]);   
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0,k=n-1;j<k;j++,k--){ // reversing horizontally
                swap(matrix[i][j],matrix[i][k]);
            }
        }

    }
};