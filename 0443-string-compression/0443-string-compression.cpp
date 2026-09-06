class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i=0;
        int n=chars.size();
        int ansIndex=0;
        while(i<n){
            int j=i+1;
            //counting the same elements
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //traversed the array or found a new element
            chars[ansIndex++]=chars[i]; // adding the char
            int count=j-i;//to add the count now
            if(count>1){
                string s=to_string(count);//for two digit count
                for(char ch:s){
                    chars[ansIndex++]=ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};