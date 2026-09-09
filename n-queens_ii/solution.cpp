class Solution {
public:
int count=0;
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

    void solve(int col,int N,int board[][20]){
        if(col>=N){
            count++;
            return;
        }
        for(int i=0;i<N;i++){
            if(issafe(i,col,N,board)){
                board[i][col]=1;
                solve(col+1,N,board);
                board[i][col]=0;
            }
        }
    }
    int totalNQueens(int n) {
        int board[20][20]={0};
        solve(0,n,board);
        return count;
    }
};
