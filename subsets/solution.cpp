class Solution {
public:
    void func(int index,vector<int>nums,vector<vector<int>>&ans,vector<int>list,int n){
        if(index==n){
            ans.push_back(list);
            return;
        }
        list.push_back(nums[index]);
        func(index+1,nums,ans,list,n);
        list.pop_back();
        func(index+1,nums,ans,list,n);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>list;
        func(0,nums,ans,list,n);
        return ans;
    }
};