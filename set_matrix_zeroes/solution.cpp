class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int x=0;x<n;x++){
                        ans[x][j]=0;
                    }
                    for(int y=0;y<m;y++){
                        ans[i][y]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=ans[i][j];
            }
        }
    }
};