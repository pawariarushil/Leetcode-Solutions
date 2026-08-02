class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')|| (s[i]>='0' && s[i]<='9')){
                s1+=s[i];
            }
        }
        int left=0;
        int right=s1.length()-1;
        while(left<right){
            if(tolower(s1[left])==tolower(s1[right])){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
