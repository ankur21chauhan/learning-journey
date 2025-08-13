#include<bits/stdc++.h>
using namespace std;
class Problem5{
public:
    int largestNum(int n){
        int largestDigit = 0, lastDigit;
        while(n > 0){
            lastDigit = n % 10;
            if(lastDigit > largestDigit){
                largestDigit = lastDigit;
            }

            n = n /10;

        }
        return largestDigit;
    }
};


int main(){
    int n;
    cin>>n;

    Problem5 var1;
    int ans = var1.largestNum(n);
    cout<<ans;
    return 0;


}
