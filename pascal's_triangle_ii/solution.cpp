class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex+=1;
        vector<int>row{rowIndex};
        long ans=1;
        row[0]=ans;
        for(int i=1;i<rowIndex;i++){
            ans*=(rowIndex-i);
            ans/=i;
            row.push_back(ans);
        }
        return row;
    }
};