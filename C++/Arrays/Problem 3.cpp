#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
        void reverse(int arr[], int n){
            int temp[n];
            for(int i = 0; i <= n-1; i++){
                temp[n-1-i] = arr[i];
            }

            for(int i = 0; i<= n-1; i++){
                arr[i] = temp[i];
            }
        }
};

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }



    Array var1;
    var1.reverse(arr, n);
    for(int i = 0; i<= n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}