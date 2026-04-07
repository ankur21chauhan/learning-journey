#include<bits/stdc++.h>
using namespace std;
class Animal{
    protected:
        string name;
    public:
        Animal(string name){
            this->name = name;
        } 

        virtual void makeSound() = 0;
};

class Dog : public Animal{
    public:
    Dog(string name) : Animal(name){}

    void makeSound() override{
        cout<<"My dog "<<name<<" Woofs!"<<endl;
    }
};

class Cat : public Animal{
    public:
    Cat(string name) : Animal(name){}

    void makeSound() override{
        cout<<"My Cat "<<name<<" Meows!";
    }

};

int main(){
    Animal* myDog = new Dog("Tommy");
    Animal* myCat = new Cat("Kali");
    myDog->makeSound();
    myCat->makeSound();
    
    delete myDog;
    return 0;

}