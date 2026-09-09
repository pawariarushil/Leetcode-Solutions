class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            string temp=words[i];
            bool val=true;
            for(int j=0;j<words[i].length();j++){
                char c=temp[j];
                c=tolower(c);
                if(c=='a' || c=='s' || c=='d' || c=='f' || c=='g' || c=='h'|| c=='j' || c=='k' ||c=='l'){
                    val=true;
                }
                else{
                    val=false;
                }
                if(val==false){
                    break;
                }
            }
            if(val==true){
                    ans.push_back(temp);
            }
        }
        for(int i=0;i<n;i++){
            string temp=words[i];
            bool val=true;
            for(int j=0;j<words[i].length();j++){
                char c=temp[j];
                c=tolower(c);
                if(c=='q' || c=='w' || c=='e' || c=='r' || c=='t' || c=='y' || c=='u' || c=='i' || c=='o' ||c=='p'){
                    val=true;
                }
                else{
                    val=false;
                }
                if(val==false){
                    break;
                }
            }
            if(val==true){
                    ans.push_back(temp);
            }
        }
        for(int i=0;i<n;i++){
            string temp=words[i];
            bool val=true;
            for(int j=0;j<words[i].length();j++){
                char c=temp[j];
                c=tolower(c);
                if(c=='z' || c=='x' || c=='c' || c=='v' || c=='b' || c=='n' || c=='m'){
                    val=true;
                }
                else{
                    val=false;
                }
                if(val==false){
                    break;
                }
            }
            if(val==true){
                ans.push_back(temp);
            }
        }
        return ans;  
    }
};