class Solution {
public:
    int reverse(int x) {
        long long y=0;
        while(x!=0){
            y=(y*10)+x%10;
            x=x/10;
            if(y>(pow(2,31)-1) || y<-pow(2,31)){
                return 0;
            }
        
        }
        return y;
    }
};