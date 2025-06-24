#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;

        for(int i = 0; i <= num-1; i++){
            for(char ch = 'A'; ch <= i; ch++){
                cout<<ch+i;
            }
            cout<<endl;
        }

    return 0;
}