#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, maxVal = INT_MIN;
    cin>>n;
    int arr[n];
    for(int i =0 ; i <= n-1; i++){
        cin>>arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    vector<int> hash(maxVal + 1, 0);
    for(int i = 0 ; i <= n-1; i++){
        hash[arr[i]]++;
    }
    
    int q; cin>>q;
    while(q--){
        int num;
        cin>>num;
        if(num > maxVal){
            cout<<0;
        }
        else{
            cout<<hash[num]<<endl;
        }
    }




    return 0;
}