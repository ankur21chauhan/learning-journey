#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    public:
    static int counter;
        string name;
        double balance;

        
    public:
    BankAccount(string name, double balance){
            this->name= name;
            this->balance = balance;
            counter++;
        }
        string getName(){
            return name;
        }

        double getBalance(){
            return balance;
        }
};

int BankAccount::counter = 0;

int main(){
    BankAccount* obj1 = new BankAccount("Jhon", 1000);
    BankAccount* obj2 = new BankAccount("Rahul", 2000);
    BankAccount* obj3 = new BankAccount("Karan", 2);
    cout<<obj1->getName()<<"\n";
    cout<<obj3->getName()<<"\n";
    cout<<obj2->getBalance()<<"\n";
    cout<<BankAccount::counter;
    

}