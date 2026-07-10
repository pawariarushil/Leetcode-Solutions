class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        int i=words.size()-1;
        string ans=words[i];
        for(i=words.size()-2;i>=0;i--){
            ans+=" ";
            ans+=words[i];
        }
        return ans;
    }
};
