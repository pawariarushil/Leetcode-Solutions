class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        long long num=0;
        int sign=1;
        int j=0;
        while(j<n && s[j]==' '){
            j++;
        }
        if(j<n && (s[j]=='-' || s[j]=='+')){
            if(s[j]=='-'){
                sign=-1;
            }
            j++;
        }
        for(int i=j;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                break;
            }
            num=num*10+(s[i]-'0');
            if(sign*num>INT_MAX){
                return INT_MAX;
            }
            if(sign*num<INT_MIN){
                return INT_MIN;
            }
        }
        return sign*num;
    }
};