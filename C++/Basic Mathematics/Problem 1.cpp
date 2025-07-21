//Count all digits of a number.

#include<bits/stdc++.h>
using namespace std;
class digits{
    public:
        void countingDigits(int num){
            if(num==0){
                cout<<"1";
            }

            else{

            int counter = 0;

            while(num>0){
            num = num / 10;
            counter++;
            }
            cout<<counter;
            }

        }
};

int main(){
    int num;
    cin>>num;
    digits var1;
    var1.countingDigits(num);
    return 0;
}