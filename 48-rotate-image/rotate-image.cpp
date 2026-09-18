class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int m = matrix[0].size();//column
      int n = matrix.size(); //rows
       for(int i = 0;i<n;i++){
        for(int j = i+1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);

        }
        
       }
       for(int k = 0;k<n;k++){
       reverse(matrix[k].begin(),matrix[k].end());
       }

        
    }
};