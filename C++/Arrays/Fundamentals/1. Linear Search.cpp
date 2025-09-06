#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> name(vector<int>& arr, int n){
            int num = -1;
            for(int i; i <= n-1; i++){
                if(n == i){
                    cout<<i;
                }
            }
            return num;
        }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    Solution var1;
    vector<int> result = var1.name(arr, n);
    for(int i = 0; i <= n-1; i++){
        cout<<arr[i];
    }
    cout<<endl;

    return 0;
}