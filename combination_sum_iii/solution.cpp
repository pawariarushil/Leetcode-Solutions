class Solution {
public:
    int sum(vector<int>&list){
        int add=0;
        for(int i=0;i<list.size();i++){
            add+=list[i];
        }
        return add;
    }
    void func(int index,int k,int n,vector<vector<int>>&ans,vector<int>&digits,vector<int>&list){
        if(list.size()==k && sum(list)==n){
            ans.push_back(list);
            return;
        }
        if(index==digits.size()){
            return;
        }
        list.push_back(digits[index]);
        func(index+1,k,n,ans,digits,list);
        list.pop_back();
        func(index+1,k,n,ans,digits,list);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>list;
        vector<int>digits={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        func(0,k,n,ans,digits,list);
        return ans;
    }
};