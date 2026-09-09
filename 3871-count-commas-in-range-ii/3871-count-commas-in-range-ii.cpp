class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long count=0;
        if(n>(pow(10,3)-1) && n<pow(10,6)) return n-999;
        else if(n>(pow(10,6)-1) && n<pow(10,9)) 
            return n-pow(10,3)+1+n-pow(10,6)+1;
        else if(n>(pow(10,9)-1) && n<pow(10,12))
            return n-pow(10,3)+1+n-pow(10,6)+1+n-pow(10,9)+1;
        else if(n>(pow(10,12)-1) && n<pow(10,15))
            return n-pow(10,3)+1+n-pow(10,6)+1+n-pow(10,9)+1+n-pow(10,12)+1;
        else 
            return n-pow(10,3)+1+n-pow(10,6)+1+n-pow(10,9)+1+n-pow(10,12)+1+1;


    }
};