class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(k==0){
            return;
        }
        vector<int>temp(k);
        for(int i=nums.size()-k;i<nums.size();i++){
            temp[i-nums.size()+k]=nums[i];
        }
        for(int i=nums.size()-1;i>k-1;i--){
            nums[i]=nums[i-k];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};