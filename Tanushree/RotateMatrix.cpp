class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        for(int i=0; i<r; ++i)
            for(int j = 0; j < i; ++j)
                swap(matrix[i][j],matrix[j][i]);
        for(int j =0; j < r; ++j)
            reverse(matrix[j].begin(),matrix[j].end());
    }
};