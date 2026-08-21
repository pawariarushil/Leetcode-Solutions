class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool val=(n&1);
        while(n>0){
            if((n&1)==1 && val==true){
                val=false;
            }
            else if((n&1)==0 && val==false){
                val=true;
            }
            else{
                return false;
            }
            n=n>>1;
        }
        return true;
    }
};
