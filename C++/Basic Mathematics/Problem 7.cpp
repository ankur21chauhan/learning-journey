#include<bits/stdc++.h>
using namespace std;
class armstrong{
    private:
        int countDigit(int n){
            int count = log10(n)+1;
            return count;
        }

    public:
        bool Solution(int n){
            int sum = 0, lastDigit;
            int count = countDigit(n);
            int copy = n;
            

            while(n>0){
                lastDigit = n % 10;
                sum = sum + pow(lastDigit, count);
                n = n /10;
            }
            if(sum == copy) return true;
            return false;
        }
};

int main(){
    int n;
    cin>>n;

    armstrong var1;
    bool ans = var1.Solution(n);
    
    if(ans) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    
    return 0;

}