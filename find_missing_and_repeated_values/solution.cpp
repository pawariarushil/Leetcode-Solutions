class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total=n*n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int>ans;
        int a=-1;
        int b=-1;
        for(int i=1;i<=total;i++){
            if(mp[i]==2){
                a=i;
            }
            if(mp[i]==0){
                b=i;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};