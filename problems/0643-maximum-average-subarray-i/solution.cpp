class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum=0;
        for(int i=0;i<k;i++){
            maxsum+=nums[i];
        }
        int sum=maxsum;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
        return maxsum/k;
    }
};
