#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>> a >> b >> c;

    if(a>=b){
        if(a>=c){
            cout<<"A is the Largest";
        }
        else{
            cout<<"C is the largest";
        }
    }
    else if (b>=c)
    {
        cout<<"B is the largest";
    }
    else{
        cout<<"C is the largest";
    }
    
    return 0;
}