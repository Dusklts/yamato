class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int si=matrix.size();
        for(int i=0;i<si;i++)
        for(int j=i+1;j<si;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        for (auto&matrix :matrix)
        reverse (matrix.begin(),matrix.end());
    }//for the man
};