class Solution {
    public void nextPermutation(int[] nums) {
        int i=nums.length-1;
        int j=i;
        while(i>0 && nums[i-1]>=nums[i])
            i--;
        i--;
        if(i>=0)
        {
            while(j>=0 && nums[j]<=nums[i])
                j--;
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
        j=nums.length-1;
        i++;
        while(i<j)
        {
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            i++;
            j--;
        }
    }
}