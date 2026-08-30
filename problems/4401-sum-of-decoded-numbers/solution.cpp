class Solution {
public:
    const long long MOD=1000000007;
    long long power(long long a,long long b){
        long long temp=1;
        while(b>0){
            if(b%2==1){
                temp=(temp*a)%MOD;
            }
            a=(a*a)%MOD;
            b/=2;
        }
        return temp;
    }
    int sumDecoded(vector<long long>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            long long width=nums[i]%10;
            long long di=nums[i]/10;
            string x=to_string(di);
            string xii="";
            for(int i=0;i<width;i++){
                xii+=x[i];
            }
            long long xi;
            if(xii==""){
                xi=0;
            }
            else{
                xi=stoi(xii);
            }
            string yii="";
            for(int i=width;i<x.length();i++){
                yii+=x[i];
            }
            long long yi;
            if(yii==""){
                yi=0;
            }
            else{
                yi=stoi(yii);
            }
            ans+=power(xi,yi);
        }
        return ans%MOD;
    }
};
