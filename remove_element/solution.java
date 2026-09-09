class Solution {
    public int removeElement(int[] nums, int val) {
        ArrayList<Integer> al=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]==val){
                continue;
            }
            else{
                al.add(nums[i]);
            }
        }
        int count=nums.length;
        for(int i=0;i<nums.length;i++){
            if(val==nums[i]){
                count--;
            }
        }
        for(int i=0;i<al.size();i++){
            nums[i]=al.get(i);
        }
        return count;
    }
}