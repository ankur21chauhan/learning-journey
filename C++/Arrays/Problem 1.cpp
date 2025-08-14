#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int array1(int arr[], int n){
            int sum = 0;
            for(int i = 0; i <= n-1; i++){
                sum = sum + arr[i];
            }
            return sum;
        }
};

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    A var1;
    cout<<var1.array1(arr, n);


}