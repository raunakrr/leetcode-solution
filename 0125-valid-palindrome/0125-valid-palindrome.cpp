class Solution {
public:
    string makeLinear(string s){
        for(int i=0;i<s.size();){
            if(!((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))){
                s.erase(i,1);
            }
            else i++;
        }
        return s;
    }
    char toLowercase(char ch){
        if(ch >= 'a' && ch <= 'z'){
            return ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            return ch-'A'+'a';
        }
        return ch;
    }
    bool reverse(string s){
        int n=0;
        for(int i=0;s[i]!='\0';i++){
            n++;
        }
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        s=makeLinear(s);
        for(int i=0;s[i]!='\0';i++){
            s[i]=toLowercase(s[i]);
        }
        return reverse(s);
    }
};