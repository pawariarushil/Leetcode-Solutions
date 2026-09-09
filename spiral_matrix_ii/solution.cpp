class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int top=0;
        int bottom=n-1;
        int right=n-1;
        int left=0;
        int count=0;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                count++;
                ans[top][i]=count;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                count++;
                ans[i][right]=count;
            }
            right--;
            if(right>=left){
                for(int i=right;i>=left;i--){
                    count++;
                    ans[bottom][i]=count;
                }
            }
            bottom--;
            if(bottom>=top){
                for(int i=bottom;i>=top;i--){
                    count++;
                    ans[i][left]=count;
                }
                left++;
            }
            
        }
        return ans;
        
    }
};