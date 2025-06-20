#include<bits/stdc++.h>
using namespace std;
class solution{
private:
    void pattern1(int n){
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }

        for(int j = 1; j <= 2 * i - 1; j++){
            cout<<"*";
        }

        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    }

    void pattern2 (int n){
    for(int i =0; i <= n-1; i++){

        for(int j = 0; j < i; j++){
            cout<<" ";
        }

        for(int j = 0; j < (2 * n - 1)-(2*i); j++){
            cout<<"*";
        }

        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    }
    

public:
    void pattern9(int n) {
        pattern1(n);
        pattern2(n);

    }
    

};


int main(){
    int n;
    cin>>n;
    solution sol;
    sol.pattern9(n);
    return 0;
}