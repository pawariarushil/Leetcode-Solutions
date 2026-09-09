class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>abc;
        for(int i=0;i<nums.size();i++){
            abc[nums[i]]++;
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(abc[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};