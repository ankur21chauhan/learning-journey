#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void leftRotate(vector<int>& arr){
            int size = arr.size(), temp = arr[0];
            for(int i = 1; i <= size-1; i++){
                arr[i - 1] = arr[i];
            }
            arr[size - 1] = temp;
        }
};

int main(){
    int n; 
    cin>>n;

    vector<int> arr(n);
    for(int i = 0 ; i<= n-1; i++){
        cin>>arr[i];
    }

    Solution var1;
    var1.leftRotate(arr);   // function call

    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
}
