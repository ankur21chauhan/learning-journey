#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void rotateMatrix(vector<vector<int>>& matrix){
            int n = matrix.size();
            for(int i = 0; i<= n-1; i++){
                for(int j = i + 1; j <=n-1; j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            for(int i = 0; i <= n-1; i++){
                reverse(matrix[i].begin(), matrix[i].end());
            }
        }
};

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    solution obj;
    obj.rotateMatrix(matrix);

    // Print rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}