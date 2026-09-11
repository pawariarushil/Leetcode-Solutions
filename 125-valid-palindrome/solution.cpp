// 0 ms | 10.3 MB
class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                ans+=tolower(s[i]);
            }
        }
        int left=0;
        int right=ans.length()-1;
        while(left<right){
            if(ans[left]!=ans[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};