#include<bits/stdc++.h>
using namespace std;
//BASE Abstract Class
class Animal{
    protected:
    string name;
    public:

    Animal(string name){
        this->name = name;
    }

    virtual ~Animal(){}
};

// Behaviour Interfaces
class Eater{
    public:
        virtual void eat() = 0;
        virtual ~Eater(){} //Why virtual destructor? for future safety
};

class Drinker{
    public:
        virtual void drink() = 0;
        virtual ~Drinker(){}
};

class Sound{
    public:
        virtual void sound() = 0;
        virtual ~Sound(){}
};

//Implementations
class Dog : public Animal, public Eater, public Sound{
public:
    Dog(string name) : Animal(name){}

        void eat() override{
            cout<<"My Dog "<< name<<" eats bone"<<endl;
        }

        void sound() override{
            for(int i = 0; i < 5;i++){
                cout<<"My Dog "<< name<< " Woofs"<<endl;
            }
        }
};

class Cat : public Animal, public Drinker, public Eater{
    public:
        Cat(string name) : Animal(name){}

        void eat() override{    
            cout<<"My cat "<<name<<" eats roti!"<<endl;
        }

        void drink() override {
            cout<<"My cat "<<name <<" drinks Milk"<<endl;
        }
};

int main(){
    
    Dog* dog = new Dog("Tommy");
    Cat* cat = new Cat("Tom");

    Eater* C_eat = cat;
    Drinker* C_drink = cat;

    Eater* D_eat = dog;

    C_eat->eat();
    C_drink->drink();
    
    D_eat->eat();

    delete cat;
    delete dog;
    
    return 0;
  

}

