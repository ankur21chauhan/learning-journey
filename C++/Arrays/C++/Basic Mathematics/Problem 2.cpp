//To count the number of odds in digits

#include<bits/stdc++.h>
using namespace std;
class digits{
public:
    void countingOdd(int num){
        int counter = 0, lastDigit;
        while(num > 0){
            lastDigit = num % 10;
            if(lastDigit % 2 == 1){
                counter++;
            }
            num = num / 10;

        }
        cout<<counter;
    }
};

int main(){
    int num;
    cin>>num;
    digits variable1;
    variable1.countingOdd(num);
    return 0;
}