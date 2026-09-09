class Solution {
    public int removeDuplicates(int[] nums) {
        ArrayList<Integer> al=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(al.indexOf(nums[i])==-1){
                al.add(nums[i]);
            }
        }
        for(int i=0;i<al.size();i++){
            nums[i]=al.get(i);
        }
        return al.size();
    }
}