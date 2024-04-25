class Solution {
    public int search(int[] nums, int target) {
        int high= nums.length-1;
        int low=0;
        int i=(high+low)/2;
        do
        {
            i=(high+low)/2;
            if(target>nums[i])
            {
                low=i+1;
                
            }
            else
            if(target<nums[i])
                {
                    high=i-1;
                   
                }
                else
                return i;
        }while(low<=high);
        return -1;
    }
}