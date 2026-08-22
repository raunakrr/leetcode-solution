class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid= s+(e-s)/2;
        int res;
        while(s<=e){
            if(arr[mid]>arr[mid+1]){
                res=mid;
                e=mid-1;
            }
            else if(arr[mid]<arr[mid+1])
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return res;
    }
};