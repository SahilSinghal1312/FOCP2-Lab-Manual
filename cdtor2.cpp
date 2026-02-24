#include <iostream>
using namespace std;
class area{            
public:                  
    float base,height;
    area(float b,float h){                     
        base=b;
        height=h;
        cout<<"height:"<<height<<"base :"<<b<<endl;
        cout<<"area"<<0.5*base *height;
    }
    ~area(){
        cout<<"destructor called for"<<base<<" "<<height<<endl;
    }
    
};

int main(){
    area a(5,5);
    area b(2,2);
   
    return 0;
}