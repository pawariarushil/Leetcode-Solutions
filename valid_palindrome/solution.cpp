class Solution {
public:
    bool isPalindrome(string s) {
        string final;
        for(int i=0;i<s.length();i++){
            if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9'))){
                continue;
            }
            else{
                final+=tolower(s[i]);
            }
        }
        string abc=final;
        reverse(final.begin(),final.end());
        cout<<abc<<endl<<final;
        for(int i=0;i<abc.length();i++){
            if(abc[i]==final[i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};