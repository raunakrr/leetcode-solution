class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int lsum=0;
        int rsum;
        for(int i=0;i<nums.size();i++){
            rsum=sum-lsum-nums[i];
            if(rsum==lsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};