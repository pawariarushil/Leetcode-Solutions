class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int N=text1.length();
        int M=text2.length();
        int dp[N+1][M+1];
        for(int i=0;i<=N;i++){
            for(int j=0;j<=M;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[N][M];
    }
};