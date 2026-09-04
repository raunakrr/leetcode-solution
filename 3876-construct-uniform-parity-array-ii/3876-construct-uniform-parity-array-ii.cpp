class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        for(int x: nums1){
            if((x%2)!=0) mini=min(mini,x);
        }   
        if(mini==INT_MAX) return true;

        for(int x: nums1){
            if((x%2)==0 && x<mini) return false;
        }
        return true;
    }
};