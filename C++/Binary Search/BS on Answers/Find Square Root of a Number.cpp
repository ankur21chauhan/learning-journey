#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int squareRoot(long long n){
            long long low = 1, high = n;
            while (low <= high)
            {
                long long mid = low + (high - low) / 2;
                if(mid <= n / mid){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return high;
        }
};

int main(){
    long long n;
    cin>>n;

    Solution var1;
    cout<<var1.squareRoot(n);
    return 0;
}
