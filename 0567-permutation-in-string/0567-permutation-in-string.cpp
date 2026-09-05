class Solution {
public:
    bool checkIt(int a[],int b[]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int need[26]={0};
        int index=0;
        for(int i=0;i<s1.length();i++){
            index=s1[i]-'a';
            need[index]++;
        }
        int l=0;
        int count[26]={0};
        for(int i=0;i<s1.length();i++){
            index=s2[i]-'a';
            count[index]++;
        }
        for(int r=s1.length();r<s2.length();r++){
            if(checkIt(need,count)) return true;
            index=s2[r]-'a';
            count[index]++;
            index=s2[l]-'a';
            count[index]--;
            l++;
        }
        if(checkIt(need,count)) return true;
        return false;
    }
};