#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num - i + 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

 //here logic is num-i+1 let say num = 3 so 3-1+1 = 3, then for next iteration 3-2+1 = 2, then for next 3-3+1 = 1 and loop ends