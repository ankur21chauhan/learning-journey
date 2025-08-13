#include<iostream>
using namespace std;
class palindrome{
public:
    bool palin(int n){
        int lastDigit, revNum = 0, original_n = n;
        while(n>0){
        lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n /10;

        

        }
        return original_n == revNum;

    }
};

int main(){
    int n;
    cin>>n;
    palindrome var1;
    //if(var1.palin(n)){
    //    cout<<"True";
    //}
    //else{
    //    cout<<"False";
    //}

    //OR using ternary operator


    cout<<(var1.palin(n) ? "True":"Flase");
}