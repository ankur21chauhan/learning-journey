#include<iostream>
using namespace std;
int count = 0;
void printName(int n){
    if(count == n){
        return;
    }
    count++;
    printName(n);
    cout<<"Ankur is Developer"<<endl;


}
int main(){
    int n;
    cin>>n;
    printName(n);
    return 0;
}