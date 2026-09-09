class Solution {
public:
    int sum(vector<int>&list){
        int add=0;
        for(int i=0;i<list.size();i++){
            add+=list[i];
        }
        return add;
    }
    void func(int index,int target,vector<vector<int>>&ans,vector<int>&candidates,vector<int>&list){
        if(sum(list)==target){
            ans.push_back(list);
            return;
        }
        if(index==candidates.size() || sum(list)>target){
            return;
        }
        list.push_back(candidates[index]);
        func(index+1,target,ans,candidates,list);
        list.pop_back();
        while(index+1<candidates.size() && candidates[index]==candidates[index+1]){
            index++;
        }
        func(index+1,target,ans,candidates,list);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>list;
        func(0,target,ans,candidates,list);
        set<vector<int>>st(ans.begin(),ans.end());
        vector<vector<int>>anss(st.begin(),st.end());
        return anss;
    }
};