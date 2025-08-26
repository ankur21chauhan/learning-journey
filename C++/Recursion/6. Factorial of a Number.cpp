#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int Factorial(int n){
            if(n == 0 || n ==1){
                return 1;
            }
            return n * Factorial(n-1);
            
        }
};

int main(){
    int n;
    cin>>n;

    Solution var1;
    cout<<var1.Factorial(n);
    return 0;
}