//This is an optimal solution having time complexity O(sqrt(n)) and space complexity O(1). Considering going till square root also works.


#include<bits/stdc++.h>
using namespace std;
class a{
    public:
        bool prime(int n){
            if(n == 1){
                return false;
            }
            for(int i = 2; i*i <= n; i++){
                if(n%i==0){
                    return  false;
                }

            }
            return true;
        }
};

int main(){
    int n;
    cin>>n;

    a var1;
    bool ans = var1.prime(n);
    if(ans){
        cout <<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }

    return 0;

}