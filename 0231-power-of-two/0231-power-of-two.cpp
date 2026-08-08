class Solution {
public:
    bool isPowerOfTwo(int n) {
        int m=n;
        if(n==1)
            return true;
        if(n%2==0 && n>0){
            while(m!=1){
                if(m%2!=0) return false;
                m=m/2;
                if(m==1) return true;
            }
        }
        return false;
    }
};