#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    public:
    string accountNumber;
    double balance;

    BankAccount(string accountNumber, double balance){
        this-> accountNumber = accountNumber;
        this-> balance = balance;
    }

    void deposit(double amount){
        this->balance += amount; 
    }

    void withdraw(double amount){
        if(balance >= amount){
            this-> balance -= amount;
        }
        else{
            cout<<"Insufficient funds!"<<endl;
        }
    }

    void displayDetails(){
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<fixed<<setprecision(2);
        cout<<"Balance : "<<balance;
    }
};

int main(){
    BankAccount obj1("1001", 3000);

    obj1.deposit(500);

    obj1.withdraw(3400);
    obj1.displayDetails();

    return 0;

}

