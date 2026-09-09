class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int min=INT_MAX;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[left]<=nums[mid]){
                if(nums[left]<=min){
                    min=nums[left];
                }
                left=mid+1;
            }
            else{
                if(nums[mid]<=min){
                    min=nums[mid];
                }
                right=mid-1;
            }
        }
        return min;
    }
};