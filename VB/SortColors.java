class Solution {
    public void swap(int a,int b,int arr[])
    {
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    public void sortColors(int[] nums) {
    int high=nums.length-1;
        int low=0;
        int mid=0;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(low,mid,nums);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(high,mid,nums);
                high--;
            }
        }
    }
}