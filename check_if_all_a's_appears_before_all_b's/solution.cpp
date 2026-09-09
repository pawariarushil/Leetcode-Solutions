class Solution {
public:
    bool checkString(string s) {
        int n=s.length();
        int lasta=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                lasta=i;
            }
        }
        for(int i=0;i<lasta;i++){
            if(s[i]=='b'){
                return false;
            }
        }
        return true;
    }
};