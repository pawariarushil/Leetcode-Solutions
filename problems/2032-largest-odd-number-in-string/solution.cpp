class Solution {
public:
    string largestOddNumber(string num) {
        string odd="";
        int j=-1;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0){
                j=i;
                break;
            }
        }
        for(int i=0;i<=j;i++){
            odd+=num[i];
        }
        return odd;
    }
};
