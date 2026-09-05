class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxx=INT_MIN,minn=INT_MAX;
        int suff[n];
        for(int i=n-1;i>=0;i--){
            minn=min(nums[i],minn);
            suff[i]=minn;
        }
        for(int i =0;i<n;i++){
            maxx=max(maxx,nums[i]);
            if((maxx-suff[i])<=k){
                return i;
            }
        }
        return -1;
    }
};