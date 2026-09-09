class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>sor;
        for(int i=0;i<nums.size();i++){
            sor.push_back(nums[i]);
        }
        sort(sor.begin(),sor.end());
        int ans=0;
        if((sor[sor.size()-1]/2)>=(sor[sor.size()-2])){
            ans=sor[sor.size()-1];
            cout<<ans;
        }
        else{
            return -1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans){
                return i;
            }
        }
        return -1;
    }
};