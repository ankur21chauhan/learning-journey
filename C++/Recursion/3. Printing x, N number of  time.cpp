#include<bits/stdc++.h>
using namespace std;
void Solution(int x, int N){
    if(N == 0){
        return;
    }
    Solution(x, N-1);
    cout<<x<<endl;
}

int main(){
    int x, N;
    cin>>x>>N;
    Solution(x, N);
}