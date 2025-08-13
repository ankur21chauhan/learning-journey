#include<bits/stdc++.h>
using namespace std;
class factorial{
    public:
        int factorialFunc(int n){
            long ans = 1;
            for(int i = 1; i <= n; i++){
                ans = ans * i;
            }
            cout<<ans;
        }
};

int main(){
    int n;
    cin>>n;

    factorial var1;

    int ansd =  var1.factorialFunc(n);
    cout<<ansd;
    

    return 0;
}