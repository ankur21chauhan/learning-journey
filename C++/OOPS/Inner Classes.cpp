#include<bits/stdc++.h>
using namespace std;
class OuterClass{
    public:
    static int val;
    string name = "Outer Class";

    class InnerClass{
        public:
            void execute(){
                cout<<"Inner class";
            }
    };
};

int OuterClass::val = 10;

int main(){
    OuterClass::InnerClass obj;
    obj.execute();
}