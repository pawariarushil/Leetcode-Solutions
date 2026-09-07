class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        set<int>st;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp2[nums2[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp2[nums1[i]]>0){
                st.insert(nums1[i]);
            }
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};
