class Solution {
public:
    bool isPowerOfFour(int n) {
        long long count=1;
        while(count<=n){
            if(count==n){
                return true;
            }
            count=count*4;
        }
        return false;
    }
};
