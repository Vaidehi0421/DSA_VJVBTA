class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res(numRows);
        
        /*res[0] = {1};
        
        res[1] = {1,1};
        res[2] = {1,2,1};*/
        for(int k = 0; k < numRows ; ++k)
        { vector<int> temp(k+1 , 0);
           temp[0]=1;
        for(int  i = 1 ; i <= k ; ++i)
        {
            for(int j =i ; j> 0; --j)
             temp[j] = temp[j]+temp[j-1];
        }
         res[k] = temp;
        }
        return res;
    }
};