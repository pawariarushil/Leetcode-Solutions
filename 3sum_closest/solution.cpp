class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mindiff=INT_MAX;
        int val=0;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return target;
                }
                else if(sum>target){
                    if(abs(sum-target)<mindiff){
                        mindiff=abs(sum-target);
                        val=sum;
                    }
                    k--;
                }
                else{
                    if(abs(sum-target)<mindiff){
                        mindiff=abs(sum-target);
                        val=sum;
                    }
                    j++;
                }
            }
        }
        return val;
    }
};