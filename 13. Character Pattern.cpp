#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cin>>num1;

    for(int i = 1; i<=num1; i++){
        for(int j = 0; j<=num1-i; j++){
            cout<<" ";
        }

        char ch = 'A';
        for(int j = 1; j <= (2*i-1);j++){
            cout<<ch;
            
            if(j<i){
                ch++;
            }
            else{
                ch--;
            }


        }
            for(int j = 0; j<=num1-i; j++){
            cout<<" ";
            }

        cout<<endl;

    }

    return 0;
}