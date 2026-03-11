//CANDY CRUSH GAME
#include <iostream>
using namespace std;
class candycrush{
    public:
    string color;
    int points;
    void setcandy(string c,int p){
        color=c;
        points=p;
    }
    void displaycandy(){
        cout<<"color of candy :"<<color<<endl;
        cout<<"points of candy :"<<points<<endl;
    }
};
int main(){
    candycrush c1;
    candycrush c2;
    c1.setcandy("red",9);
    c2.setcandy("yellow",13);
    c1.displaycandy();
    c2.displaycandy();
return 0;
}