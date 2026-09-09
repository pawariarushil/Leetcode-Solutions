class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            bool alreadyadded=false;
            for(int x:temp){
                if(x==nums[i]){
                    alreadyadded=true;
                    break;
                }
            }
            if(alreadyadded)continue;
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    count++;
                }
            }
            if(count>nums.size()/3){
                temp.push_back(nums[i]);
            }
        }
        return temp;
    }
};