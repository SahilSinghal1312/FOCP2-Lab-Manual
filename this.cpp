#include<iostream>
using namespace std;
class student{
    private:
    int age;
    public:
    void setage(int age){
        this->age=age;            //this->age. refers to class member or current object 
    }
    void display(){
        cout<<"age:"<<this->age<<endl;
    }
};
int main(){
    student s1;
    s1.setage(10);
    s1.display();

    return 0;
}