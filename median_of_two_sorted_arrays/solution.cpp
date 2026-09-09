class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>num3;
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                num3.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>=nums2[j]){
                num3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            num3.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            num3.push_back(nums2[j]);
            j++;
        }
        if(num3.size()%2==0){
            return (num3[(num3.size()/2)]+num3[((num3.size()/2)-1)])/2;
        }
        else{
           return num3[num3.size()/2]; 
        }
    }
};