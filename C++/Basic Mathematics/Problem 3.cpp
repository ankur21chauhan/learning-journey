#include<iostream>
using namespace std;
class reverse{
public:
    int reverseFunction(int num){
        int revNum = 0, lastDigit;
        while(num>0){
            lastDigit = num % 10; //taking last digit out
            revNum = (revNum * 10) + lastDigit;  //Logic for reversing
            num = num / 10; //taking new number
        }
        return revNum;  //output 
    }
};

int main(){
    int num, ans; 
    cin>>num;

    reverse sol;
    ans = sol.reverseFunction(num);

    cout<<ans;





    return 0;
}