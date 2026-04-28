#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;

    student(){
        name="unknown";
        age=0;
    }
    student(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"name:"<<name<<", age:"<<age<<endl;
    }
};
int main(){
    //array of obj using default constructor 
    student s1[2];
    cout<<"default constructor values:\n";
    for(int i=0;i<2;i++){
        s1[i].display();
    }
    cout<<endl;
    //array of objects using parameterized constructor
    student s2[2]={
        student("abc",20),
        student("xyz",10)
    };
    cout<<"parameterized constructor values:\n";
    for(int i=0;i<2;i++){
        s2[i].display();
    }
    return 0;
    
}