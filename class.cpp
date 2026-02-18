#include <iostream>
using namespace std;
class area{            
public:                  
    float base,height;
    void setdata(float b,float h){                     
        base=b;
        height=h;
    }
    float getareaoftriangle(){
        return 0.5*base *height;
    }
    void showbaseheight(){
        cout<<"base:"<<base<<endl;
        cout<<"height:"<<height<<endl;
    }
};
int main(){
    area a;
    a.setdata(5,15);
    a.showbaseheight();
    cout<<a.getareaoftriangle();
    return 0;
}