#include<bits/stdc++.h>
using namespace std;
void explainVectors(){

    //initializing array
    vector<int> var1 = {10,20,30,40,50};

    //printing the entire array using iterator
    vector<int>::iterator beginItr = var1.begin();
    vector<int>::iterator endItr = var1.end();
    
    for(auto i = beginItr; i<endItr;i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;

    auto varuabl1 = var1.rbegin();
    auto varuabl2 = var1.rend();

    for(auto i = varuabl1; i < varuabl2; i++){
        cout<<*i<<" ";
    }


}

int main(){
    explainVectors();
    return 0;
}