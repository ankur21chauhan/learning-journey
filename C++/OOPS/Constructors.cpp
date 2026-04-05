#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
    double length, width, area;
    //Default Constructor
    Rectangle(){
        this->length = 1.0;
        this->width = 1.0;
    }

    //Parameterized Constructor
    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }

    void calulateArea(double area){
        this->area = length * width;
    }

    void displayDetails(){
        cout<<fixed<<setprecision(2);
        cout<<"Length : "<<length;
        cout<<"Width : "<<width;
        cout<<"Area : "<<area;
    }
};

int main(){
    Rectangle obj1(3,5);
    Rectangle obj2 ;

    obj1.displayDetails();
    cout<<endl;
    obj2.displayDetails();
    return 0;
}