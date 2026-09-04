class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n);
        vector<int> temp2(n);
        temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp2[(j+i)%n]=nums[j];
            }
            if(temp==temp2) return true;
        }
        return false;
    }
};