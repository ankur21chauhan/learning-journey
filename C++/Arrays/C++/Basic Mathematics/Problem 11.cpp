#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        vector<int> divisors(int n){
            vector<int> ans; // to store the divisors

            //iterate form 1 to n
            for(int i = 1; i <= n; i++){
                // if divisor is found
                if(n % i == 0){
                    ans.push_back(i);
                }

            }
            return ans;

        }
};

int main(){
    int n;
    cin>>n;

    A var1;
    vector<int> ans = var1.divisors(n);
    for(int i = 0; i <= ans.size(); i++){
        cout<<ans[i]<<" "; 

    }

    return 0;
}