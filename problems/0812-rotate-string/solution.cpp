class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string temp=s;
        for(int i=0;i<s.length();i++){
            if(temp==goal){
                return true;
            }
            temp.push_back(temp[0]);
            temp.erase(0,1);
        }
        return false;
    }
};
