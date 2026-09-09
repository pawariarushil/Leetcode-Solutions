
class Solution {
public:
    int reverse(long x) {
        
        long y=0;
        long z=x;
        while(z!=0){
            y*=10;
            y+=z%10;
            if(y>pow(2,31)-1 || y<-pow(2,31)){
                return 0;
            }
            z=z/10;
        }
        return y;
    }
};