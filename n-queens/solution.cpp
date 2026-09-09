class Solution {
public:
    bool issafe(int row,int col,int N,int board[][20]){
        for(int j=0;j<col;j++){
            if(board[row][j]){
                return false;
            }
        }
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]){
                return false;
            }
        }
        for(int i=row,j=col;i<N && j>=0;i++,j--){
            if(board[i][j]){
                return false;
            }
            
        }
        return true;
    }

    void solve(int col,int N,int board[][20],vector<vector<string>>&ans){
        if(col>=N){
            vector<string>temp;
            for(int i=0;i<N;i++){
                string s="";
                for(int j=0;j<N;j++){
                    if(board[i][j]==1){
                        s+="Q";
                    }
                    else{
                        s+=".";
                    }
                }
                temp.push_back(s);
            }
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<N;i++){
            if(issafe(i,col,N,board)){
                board[i][col]=1;
                solve(col+1,N,board,ans);
                board[i][col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        int board[20][20]={0};
        solve(0,n,board,ans);
        return ans;
    }
};