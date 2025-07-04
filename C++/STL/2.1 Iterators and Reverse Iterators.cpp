#include<bits/stdc++.h>
using namespace std;
void explainVectors(){

    vector<int> var1 = {10,20,30,40,50};

    vector<int>::iterator beginItr = var1.begin();
    vector<int>::iterator endItr = var1.end();
    
    for(auto i = beginItr; i<endItr;i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;
}

int main(){
    explainVectors();
    return 0;
}