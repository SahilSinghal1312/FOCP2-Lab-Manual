#include <iostream>
using namespace std;
class area{            
public:                  
    float base,height;
    area(float b,float h){                              //constructor    
        base=b;
        height=h;
        cout<<"height :"<<height<<endl;
        cout<<"base :"<<b<<endl;
        cout<<"area :"<<0.5*base *height<<endl;
    }
    area(float b1,float h1){                              //constructor    
        base=b1;
        height=h1;
        cout<<"height :"<<h1<<endl;
        cout<<"base :"<<b1<<endl;
        cout<<"area :"<<0.5*b1 *h1<<endl;
    }
};

int main(){
    area a(5,5);
    
   
    return 0;
}