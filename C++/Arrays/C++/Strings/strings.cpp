#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaring the string and remembering it holds character array inside i.e 0 based indexing.
    string st = "Ankur";
    char ch = (st[2]);

    //taking output of specific characters
    cout<<ch<<endl<<st[3]<<endl;
    

    string sh2 ="Ankur Chauhan";
    cout<<sh2.substr(3,9)<<endl;
    //simple output
    //cout<<sh2<<" ";
    //traversing in the string.
    for(int i = 0; i <= sh2.length()-1;i++){
        cout<<sh2[i];
    }

    return 0;

}