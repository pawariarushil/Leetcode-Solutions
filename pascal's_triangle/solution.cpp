class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int j=1;j<numRows+1;j++){
            vector<int>temp;
            int an=1;
            temp.push_back(1);
            for(int i=1;i<j;i++){
                an*=(j-i);
                an/=i;
                temp.push_back(an);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};