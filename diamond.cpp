#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"this is A"<<endl;
    }
};
class B:virtual public A{                       //one parent multiple child so hierarical inheritance
};
class C:virtual public A{                           // adding virtual vbptr(pointer) which points to location of class A subobj
};
class D:public B,public C{              //one child multi parents so multiple inheritance 
};
int main(){
    D obj;
    // obj.show();             error ambigious ( confused )
    // C obj;
    // obj.A::show();
    
    return 0;
}
