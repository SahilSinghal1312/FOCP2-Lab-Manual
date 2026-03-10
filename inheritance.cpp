#include <iostream>
using namespace std;
class Animal{                    //base class (parent class)
    public:
    void eat(){
        cout<<"animal is eating"<<endl;
    }
};
                           //if only protected or public then can be inherited to child class ..
class Dog:public Animal{           //derived class(child class)
    public:                        
    void bark(){
        Animal a;
        cout<<"dog is barking"<<endl;
    }
};

int main(){
    Dog d;
    d.eat();         //inherited from Animal
    d.bark();
    return 0;
}