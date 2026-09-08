class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int maxr=matrix.size();
        int maxc=matrix[0].size();
        int minr=0,minc=0;
        for(int i=0;i<maxr;i++){
            for(int j=i;j<maxc;j++){ //or j=0;j<i
                int temp = matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;   
            }
        }
        for(int i=0;i<maxr;i++){
            for(int j=0,k=maxr-1;j<k;j++,k--){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][k];
                matrix[i][k]=temp;
            }
        }

    }
};