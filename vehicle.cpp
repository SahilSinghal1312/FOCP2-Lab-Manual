/*    TYPES OF INHERITANCE : SINGLE ,  MULTILEVEL ,  MULTIPLE ,  HIERARCY , HYBRID */

#include<iostream>
using namespace std;
class vehicle{
    public:
    int veh_num;
    int rent_p;
    vehicle(int vn,int rp){
        veh_num=vn;
        rent_p=rp;
    }
    void display(int a,int b){
        cout<<"vehicle number is:"<<a<<"and rental price is "<<b<<endl;
    }
};
class car:public vehicle{
    public:
   string car_type;
   int seatp;
   car(int sp,string c_t):vehicle(veh_num,rent_p){
    seatp=sp;
    car_type=c_t;
    cout<<"seating capacity is"<<sp<<"car type is :"<<c_t<<endl;
   }
};
int main(){
    car c(7,"suv");
    c.display(7000,50000);
    
    return 0;
}
