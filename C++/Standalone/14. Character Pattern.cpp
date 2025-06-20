#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    for(int i =0; i <= num-1;i++){
        char ch = ('A' + num -1)-i;
        for(int j = 0; j <=i; j++){
            cout<<ch<<" ";

            if(j<i){
                ch++;
            }
            
        } 

        cout<<endl;
    }
    



    return 0;
}