class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int product=1;
        for(int i=0;i<nums.size();i++){
            product*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(product/nums[i]);
            }
            else{
                int product1=1;
                for(int j=0;j<nums.size();j++){
                    if(i==j) continue;
                    else{
                        product1*=nums[j];
                    }
                }
                ans.push_back(product1);
            }
        }
        return ans;
    }
};
