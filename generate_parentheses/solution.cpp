class Solution {
public:
    void func(string s,vector<string>&ans,int n,int open=0,int close=0){
        if(open>n) return;
        if(open+close== 2*n && open==close){
            ans.push_back(s);
            return;
        }
        if(open<n){
            func(s+'(',ans,n,open+1,close);
        }
        if(open>close){
            func(s+')',ans,n,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n)   {
        vector<string>ans;
        func("",ans,n);
        return ans;
    }
};