class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vowels={'a','e','i','o','u','A','E','I','O','U'};
        vector<char>temp;
        for(int i=0;i<s.length();i++){
            if(find(vowels.begin(),vowels.end(),s[i])!=vowels.end()){
                temp.push_back(s[i]);
            }
        }
        string anss="";
        reverse(temp.begin(),temp.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(find(vowels.begin(),vowels.end(),s[i])==vowels.end()){
                anss+=s[i];
            }
            else{
                anss+=temp[j];
                j++;
            }
        }
        return anss;
    }
};