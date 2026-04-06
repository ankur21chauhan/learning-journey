#include<bits/stdc++.h>
using namespace std;
class calculator{
    //method overloading
    public:
    int add(int a, int b){
        return(a+b);
    }

    double add(double a, double b){
        return(a+b);
    }

    int add(int a, int b, int c){
        return(a+b+c);
    }
};

//method overriding
class Parent{
    public: 
        void displayDetails(){
            cout<<"Parent Class";
        }
};

class Child : public Parent{
    public:
        void displayDetails(){
            cout<<"Child Class";
        }
};
int main(){
    int n,m;
    cin>>n>>m;
    //calculator obj1;
    Child obj;
    obj.displayDetails();    
    //cout<<obj1.add(n,m);
    return 0;
}