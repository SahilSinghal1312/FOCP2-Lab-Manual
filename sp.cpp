// #include<iostream>
// using namespace std;
// class base{
//     public:                                    
//     base(){
//         cout<<"constructor for base class "<<endl;
//     }
// };
// class derived:public base{
//     public:                               
//     derived(){              
//     cout<<"constructor for derived class"<<endl;
//     }
// };
// int main(){
//     derived d;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class base{
//     public:                                     
//     base(int x){
//         cout<<"constructor for base class is:"<<x<<endl;
//     }
// };
// class derived:public base{
//     public:                               
//     derived(int a):base(a){      // here is is necessary to write as there is parameterized constructor
//     cout<<"constructor for derived class:"<<a<<endl;
//     }
// };
// int main(){
//     derived d(10);
//     base b(50);
//     return 0;
// }

#include<iostream>
using namespace std;
class base1{
    public:                               
    base1(){
        cout<<"constructor for base 1 class"<<endl;
    }
};
class base2{
    public:                               
    base2(){
        cout<<"constructor for base 2 class"<<endl;
    }
};
class derived:public base2,public base1{
    public:                              
    derived(){              
    cout<<"constructor for derived class"<<endl;
    }
};
int main(){
    derived d;
    return 0;
}