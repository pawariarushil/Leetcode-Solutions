// 0 ms | 11.5 MB
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        digits[n-1]++;
        int i=n-1;
        int carry=0;
        while(i>=0){
            digits[i]+=carry;
            if(digits[i]/10==1){
                digits[i]=digits[i]%10;
                carry=1;
            }
            else{
                carry=0;
            }
            if(carry==0){
                break;
            }
            i--;
        }
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};