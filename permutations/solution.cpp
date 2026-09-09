#include<algorithm>
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        int sizee=1;
        for(int i=1;i<=n;i++){
            sizee*=i;
        }
        for(int i=0;i<sizee;i++){
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return ans;
    }
};