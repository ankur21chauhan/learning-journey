#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        int nCr(int n, int r){
            long long result = 1;
            for(int i = 0; i < r; i++){
                result = result * (n - i);
                result = result / (i + 1);
            }
            return result;
        }
    public:
        int pascalTriangle(int r, int c){
            return nCr(r-1, c-1);
        }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    if(!(cin >> r >> c)) return 0;
    Solution sol;
    cout << sol.pascalTriangle(r, c) << '\n';
    return 0;
}