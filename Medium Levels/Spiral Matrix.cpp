#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> spiralMatrix(vector<vector<int>>& matrix){
            int n = matrix.size();
            int m = matrix[0].size();
            int top = 0, left = 0;
            int bottom = n - 1, right = m - 1;
            vector<int> ans;
            while(top <= bottom && left <= right){
                for(int i = left; i <= right; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
                for(int i = top; i <= bottom; i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
                if(top <= bottom){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                }
                if(left <= right){
                    for(int i = bottom; i >= top; i--){
                        ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
            }
            return ans;
        }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if(!(cin >> n >> m)) return 0;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> mat[i][j];

    Solution sol;
    vector<int> res = sol.spiralMatrix(mat);

    for(size_t i = 0; i < res.size(); ++i){
        if(i) cout << ' ';
        cout << res[i];
    }
    cout << '\n';
    return 0;
}