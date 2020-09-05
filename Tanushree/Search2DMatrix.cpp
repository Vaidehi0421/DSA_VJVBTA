class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        if(r==0)
            return false;
        int c = matrix[0].size();
        int pc = matrix[0].size()-1;
        int pr = 0;
        int i = 0,j=0;
        while(pr<r && (pc<c && pc>=0))
        {
            if(target > matrix[pr][pc])
                pr+=1;
            else if(target < matrix[pr][pc])
                pc-=1;
            else
                return true;
        }
        return false;
    }
};