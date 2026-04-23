#include<bits/stdc++.h>
using namespace std;
class Payment{
    public:
    virtual void pay(int amount) = 0;
    virtual ~Payment(){}
};

class CreditCardPayment : public Payment{
    public:
    void pay(int amount) override{
        cout<<amount<<endl;
    }

};


class UPIPayment : public Payment{
    public:
    void pay(int amount) override{
        cout<<amount<<endl;
    }

};

class NetBankingPayment : public Payment{
    public:
    void pay(int amount) override{
        cout<<amount<<endl;
    }

};

int main() {
    Payment* p1 = new CreditCardPayment();
    Payment* p2 = new UPIPayment();
    Payment* p3 = new NetBankingPayment();

    p1->pay(1000);
    p2->pay(2000);
    p3->pay(3000);

    delete p1;
    delete p2;
    delete p3;

   
    return 0;

};