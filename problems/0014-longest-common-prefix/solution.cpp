class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].length();i++){
            string temp=strs[0];
            bool check=true;
            for(int j=1;j<strs.size();j++){
                if(!(i<strs[j].size() && strs[j][i]==temp[i])){
                    check=false;
                    break;
                }
            }
            if(check){
                ans+=temp[i];
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};
