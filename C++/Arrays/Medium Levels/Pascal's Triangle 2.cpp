#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> pascalsTrangle(int r){
            vector<int> ans(r);
            ans[0] = 1;
            for(int i = 1; i < r; i++){
                ans[i] = (ans[i - 1] * (r - i)/ i);
            }
            return ans;
        }

};

int main(){
    int n;
    cin>>n;
    Solution var1;
    var1.pascalsTrangle(n);
    vector<int> row = var1.pascalsTrangle(n);

    // printing the result
    for (int x : row) {
        cout << x << " ";
    }
    cout << endl;

    return 0;

}
