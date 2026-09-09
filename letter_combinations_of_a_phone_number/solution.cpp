class Solution {
public:
    void func(int index,string &digits,string current,vector<string>&ans,vector<string>&letters)   {
        if(index==digits.length()){
            ans.push_back(current);
            return;
        }
        string lett=letters[digits[index]-'2'];
        for(char ch:lett){
            func(index+1,digits,current+ch,ans,letters);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        vector<string>letters={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        func(0,digits,"",ans,letters);
        return ans;
        
    }
};