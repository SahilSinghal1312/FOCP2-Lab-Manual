#include<iostream>
using namespace std;
class Person{
private:
string name;
int age;
public:
Person(string n,int a){         //constructor
    name=n;
    age=a;
    cout<<"constructor called for "<<name<<endl;
}
void display(){
    cout<<"Name:"<<name<<",Age:"<<age<<endl;
}
~Person(){                      //destructor
    cout<<"destructor called for"<<name<<endl;
}

};
//global object
Person globalperson("global user",40);
int main(){
    cout<<"inside main function:\n";
    Person localperson("john cena",20);  //local object
    localperson.display();

    
    return 0;

}