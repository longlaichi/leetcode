class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> answer(m, vector<int>(n));
        for(int i = 0 ;i<m;i++){
            for(int j = 0;j<n;j++){
                int sum = 0;
                for(int c = i-k;c<=i+k;c++){
                    for(int r = j-k;r<=j+k;r++){
                        if(c>=0 && c<m && r>=0 && r<n){
                            sum +=mat[c][r];
                        }
                    }
                }
                answer[i][j] = sum;
            }
        }
        return answer;
    }
};