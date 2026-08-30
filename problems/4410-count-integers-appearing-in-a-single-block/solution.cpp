class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        int i=1;
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    count++;
                }
                else if(nums[j]!=nums[i]){
                    break;
                }
            }
            if(count==mp[nums[i]]){
                ans++;
            }
            i+=count-1;
        }
        return ans;
    }
};
