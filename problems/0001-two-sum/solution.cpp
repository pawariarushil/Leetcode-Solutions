class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(mp.count(temp)>0){
                for(int j=0;j<nums.size();j++){
                    if(j!=i && nums[j]==temp){
                        return {i,j};
                    }
                }
            }
        }
        return {};
    }
};
