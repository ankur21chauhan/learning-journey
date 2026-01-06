#include<bits/stdc++.h>
using namespace std;
int main(){
  int grade;
  cin>>grade;
  if(grade >= 90)
  {
    cout<<"A";
  }
  else if (grade >= 70 )
  {
    cout<<"B";
  }
  else if (grade >= 50 )
  {
    cout<<"C";
  }
  else if (grade >= 35 )
  {
    cout<<"D";
  }

  else{
    cout<<"Fail";
  }

  


  return 0;
}