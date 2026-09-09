class Solution {
public:
    void func(int index,vector<vector<int>>&ans,vector<int>list,vector<int>nums,int n){
        if(index==n){
            ans.push_back(list);
            return;
        }
        list.push_back(nums[index]);
        func(index+1,ans,list,nums,n);
        list.pop_back();
        func(index+1,ans,list,nums,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>list;
        func(0,ans,list,nums,n);
        set<vector<int>>st(ans.begin(),ans.end());
        vector<vector<int>>anss(st.begin(),st.end());
        return anss;
    }
};