#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int num1 = 1;
    cin>>num;

        for(int i = 1; i <= num; i++){
            for(int j=1; j <= i; j++){
                    cout<<num1<<" ";
                    num1 = num1 + 1;    
                }
                cout<<endl;
        }

    return 0;
}