class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
                low+=1;
                mid+=1;
            }
            else if(nums[mid]==1)
            {
                mid+=1;
            }
            else
            {
              int temp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp;
                high-=1;
                //mid+=1;                  
            }
        }
    }
};