#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
        int id;
        string name;
        Employee(string name,int id){
            this->id = id;
            this->name = name;
        }

        void displayDetails(){
            cout<<"Name : "<<name<<endl;
            cout<<"ID : "<<id<<endl;
        }
};

class Manager : public Employee{
    public:
        int teamSize;
        Manager(string name, int id, int teamSize)
            :Employee(name, id)
        {
            this->teamSize = teamSize;
        }

        void diplayDetails(){
            Employee::displayDetails();
            cout<<"Team Size : "<<teamSize<<endl;
        }
};


class Engineer : public Employee{
    public:
        string specialization;
        Engineer(string name, int id, string specialization)
            :Employee(name, id)
        {
            this->specialization = specialization;
        }

        void displayDetails(){
            Employee::displayDetails();
            cout<<"Specialization : "<<specialization;
        }
};

int main(){
    string M_name, E_name, E_specialization;
    int M_id, E_id, M_teamSize;

    // Input
    cin >> M_name >> M_id >> M_teamSize;
    cin >> E_name >> E_id >> E_specialization;

    // Objects
    Manager manager(M_name, M_id, M_teamSize);
    Engineer engineer(E_name, E_id, E_specialization);

    // Output
    cout << "Manager Details" << endl;
    manager.displayDetails();

    cout << endl << "Engineer Details" << endl;
    engineer.displayDetails();

    return 0;
}