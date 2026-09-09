class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp1;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(auto x:nums2){
            if(mp1[x]>0){
                ans.push_back(x);
                mp1[x]--;
            }
        }
        return ans;
    }
};
