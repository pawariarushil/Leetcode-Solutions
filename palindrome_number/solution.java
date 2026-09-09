class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int c=x;
        int n=0;
        while(c>0){
            n*=10;
            n+=c%10;
            c/=10;
        }
        if(n==x){
            return true;
        }
        return false;
    }
}