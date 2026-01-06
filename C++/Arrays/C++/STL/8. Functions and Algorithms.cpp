#include<bits/stdc++.h>
using namespace std;
void sortFunction(){

    int arr[5] = {5,4,3,1,2};
    sort(arr+2, arr+4);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    vector<int> vec = {5,3,1,2,4};
    sort(vec.begin()+1, vec.end()-1);
    for(auto i : vec){
        cout<<i<<" ";
    }
}
void accumulateFunction(){
    int arr[5] = {5,4,3,1,2};
    cout<<accumulate(arr, arr+5,2);
}
void countFunction(){
    int arr[5] = {5,4,3,1,1};
    int num = 1;
    cout<<count(arr, arr+5,num);
}
int main(){
    countFunction();
    return 0;
}