//given an age print "adult" if age >=18 or teen 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int age;
  cin>>age;
  if (age >= 18){
    cout<<"Adult";
  }
  else if (age > 10 && age <18)
  {
    cout<<"Teen";
  }
  else{
    cout<<"child";
    
  
  }
  

  
return 0;

}