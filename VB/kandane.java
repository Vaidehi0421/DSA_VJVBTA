class Solution {
    public int maxSubArray(int[] nums) {
    int max=nums[0];
    int max_tillnow=0;
    for(int i=0;i<nums.length;i++)
    {
        max_tillnow+=nums[i];
        if(max<max_tillnow) max=max_tillnow;
        if(max_tillnow<0) max_tillnow=0;
    }
        return max;
    }
}