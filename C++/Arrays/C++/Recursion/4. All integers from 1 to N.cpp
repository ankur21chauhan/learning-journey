#include<bits/stdc++.h>
using namespace std;
void Solution(int n){
   if(n == 0){
    return;
   }
   
   Solution(n-1);
   cout<<<<endl;
   
   
    
} 

int main(){
    int n;
    cin>>n;
    Solution(n);
}