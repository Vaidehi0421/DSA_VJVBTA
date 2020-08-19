class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
        int k,j;
        for( k = n-2 ; k>=0; --k)
            if(nums[k] < nums[k+1])
                break;
        if(k < 0)
            reverse(nums.begin(),nums.end());
    else
    { for(j = n-1; j> k;--j)
            if(nums[j] > nums[k])
                break;
        swap(nums[j],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
     }  
        
    }
};