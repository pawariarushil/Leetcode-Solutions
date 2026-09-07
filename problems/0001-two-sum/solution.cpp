class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end() && mp[temp]!=i){
                return{i,mp[temp]};
            }
        }
        return {};
    }
};
