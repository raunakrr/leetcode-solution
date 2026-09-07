class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int maxr=matrix.size();
    int minr=0,minc=0;
    int maxc=matrix[0].size();
    int tne=maxr*maxc;
    int count=0;
    vector<int> ans;
    while(count<tne){
        for(int i=minc;i<maxc && count!=tne;i++){
            ans.push_back(matrix[minr][i]);
            count++;
        }
        minr++;
        for(int i=minr;i<maxr && count!=tne;i++){
            ans.push_back(matrix[i][maxc-1]);
            count++;
        }
        maxc--;
        for(int i=maxc-1;i>=minc && count!=tne;i--){
            ans.push_back(matrix[maxr-1][i]);
            count++;
        }
        maxr--;
        for(int i=maxr-1;i>=minr && count!=tne;i--){
            ans.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
        
    }
    return ans;
    }
};