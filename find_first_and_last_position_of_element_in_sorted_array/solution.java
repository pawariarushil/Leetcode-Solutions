class Solution {
    public int[] searchRange(int[] nums, int target) {
        int c1=-1;
        int c2=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target && c1<0)
                c1=i;
            if(nums[nums.length-i-1]==target && c2<0){
                c2=nums.length-i-1;
            }

        }
        int[] arr={c1,c2};
        return arr;
    }
}