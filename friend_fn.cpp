// friend function
#include<iostream>
using namespace std;
class student {          
    private:
    static int marks;
    public:
    student(){
        marks=85;
    }
    friend void show();        //friend fnc not a member of class but can still access private n protected data 
};
void show() {
    cout<<"marks :"<<student::marks<<endl;
}
int main(){
    student s1;
    show();
    return 0;
}