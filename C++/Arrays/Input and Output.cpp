#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    for(int i = 0; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}
