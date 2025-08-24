#include<iostream>
using namespace std;
int count = 0;
void printName(int n){
    if(count == n){
        return;
    }
    cout<<"Ankur is Developer"<<endl;
    count = count + 1;
    printName(n);

}
int main(){
    int n;
    cin>>n;
    printName(n);
    return 0;
}