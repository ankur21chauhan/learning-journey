#include<bits/stdc++.h>
using namespace std;
int main(){
    int num_1, num_2;
    cin>> num_1 >> num_2;

    cout<< num_1 << endl << num_2<<endl;
    cin.ignore();  //cin just ignores the enter for string values so cin.ignore(); is must here 
    string str1; 
    getline(cin,str1);
    cout<<str1;
    
    return 0;
}