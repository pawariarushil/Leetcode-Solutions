

class Solution {
    int MAX=10000000;
    char stack[]=new char[MAX];
    int top=-1;
    public char pop(){
        if(top==-1){
            System.out.println("Underflow");
            return 'x';
        }
        return stack[top--];
    }
    public void push(char x){
        if(top==MAX-1){
            System.out.println("Overflow");
            return;
        }
        stack[++top]=x;
    }
    public boolean isValid(String s) {
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='[' || s.charAt(i)=='{' || s.charAt(i)=='('){
                push(s.charAt(i));
            }
            else if(s.charAt(i)==']' || s.charAt(i)=='}' || s.charAt(i)==')'){
                char x=pop();
                if(s.charAt(i)==']' && x=='['){
                    continue;
                }
                else if(s.charAt(i)=='}' && x=='{'){
                    continue;
                }
                else if(s.charAt(i)==')' && x=='('){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(top==-1){
            return true;
        }
        return false;
    }
}