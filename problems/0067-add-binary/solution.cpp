class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string ans="";
        int n=a.length()-1;
        int m=b.length()-1;
        while(n>=0 || m>=0 || carry){
            int sum=carry;
            if(n>=0){
                sum+=a[n]-'0';
                n--;
            }
            if(m>=0){
                sum+=b[m]-'0';
                m--;
            }
            if(sum>1){
                carry=1;
                sum=sum%2;
            }
            else{
                carry=0;
            }
            ans+=to_string(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
