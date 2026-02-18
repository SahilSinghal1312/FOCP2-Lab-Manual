#include <iostream>
using namespace std;
class student{                //class is a data type in c++
    private:                 //only accessible inside class
    int marks;
    protected:               //accessible inside class (and derived classes)
    int rollnumber;
public:                  //accessible everywhere
    string name;
//setter for private and protected data
    void setdata(int m,int r){                        //function is also inside public 
        marks=m;
        rollnumber=r;
    }
    //getter for private data            incapsulation is binding data func in class and controlling its access with help of access specifier 
    int getmarks(){
        return marks;
    }
    //function to show protected data
    void showrollnumber(){
        cout<<"Roll Number:"<<rollnumber<<endl;
    }
};
int main(){
    //object creation                creating object so to access data func outside the class 
    student s1;
    //accessing public member 
    s1.name="Alice";
    //setting private and protected values
    s1.setdata(90,101);
    cout<<"Name :"<<s1.name<<endl;
    cout<<"Marks :"<<s1.getmarks()<<endl;

    //accessing protected data using public function
    s1.showrollnumber();

    //these would cause error if uncommented:
    return 0;
}