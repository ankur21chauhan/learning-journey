#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
class a{
    public:
        int gcd(int n1, int n2){
            while(n1 != 0 && n2 != 0){
                if(n1 > n2){
                    n1 = n1 % n2;
                }
                else{
                    n2 = n2 % n1;
                }
            }

            if(n2 == 0){
                return n1;
            }
            else{
                return n2;
            }


     }
};

int main(){
    int n1, n2;
    cin>>n1>>n2;

    a var1;
    cout<<"GCD is : "<<var1.gcd(n1, n2);

    return 0;
}