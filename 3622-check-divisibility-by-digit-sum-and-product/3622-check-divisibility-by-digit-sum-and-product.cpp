class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int dsum=0,dprod=1;
        while(n>0){
            dsum+=n%10;
            dprod*=n%10;
            n=n/10;
        }
        int sum=dsum+dprod;
        if(m%sum==0) return true;
        return false;
    }
};