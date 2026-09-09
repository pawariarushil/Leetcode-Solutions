class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()>=3){
            int count=1;
            int j=nums.size()-2;
            while(j>=0){
                if(nums[j]==nums[j+1]){
                    j--;
                }
                else{
                    count++;
                    j--;
                }
                if(count==3){
                    return nums[j+1];
                }
            }
        }
        return nums[nums.size()-1];
    }
};