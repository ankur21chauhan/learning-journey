#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void pattern16(int n) {
        
        for(int i=0;i<n;i++){
          
        
            char ch = 'A'+i;
            for(int j=0;j<=i;j++){
              
            cout<<ch;
            }
          
            cout<<endl;
        }
    }

};

int main() {
    int N = 5;

    
    Solution sol;

    sol.pattern16(N);

    return 0;
}