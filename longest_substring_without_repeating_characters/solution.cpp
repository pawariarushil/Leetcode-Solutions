class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""){
            return 0;
        }
        int max=1;
        for(int i=0;i<s.length();i++){
            string temp="";
            for(int j=i;j<s.length();j++){
                int count=0;
                for(int k=0;k<temp.length();k++){
                    if(s[j]==temp[k]){
                        count++;
                        break;
                    }
                }
                if(count==0){
                    temp+=s[j];
                }
                else{
                    break;
                }
            }
            if(temp.length()>max){
                max=temp.length();
            }
        }
        return max;
    }
};