class Solution {
    public int strStr(String haystack, String needle) {
        int x=needle.length();
        for(int i=0;i<=haystack.length()-x;i++){
            String abc="";
            for(int j=i;j<i+x;j++){
                abc+=haystack.charAt(j);
            }
            if(abc.equals(needle)==true){
                return i;
            }
        }
        
        return -1;
    }
}