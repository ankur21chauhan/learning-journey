#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNumber;

    //Method1
    void setDetails(string name, int rollNumber){
        this->name = name;
        this->rollNumber = rollNumber;
    }

    //Method2
    void displayDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rollNumber;
    }
};

int main(){

    Student obj1;
    obj1.setDetails("Jhon", 12312);
    obj1.displayDetails();

    return 0;
}
