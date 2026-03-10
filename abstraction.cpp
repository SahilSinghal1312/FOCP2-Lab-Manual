#include <iostream>
using namespace std;
class bankacc{
    private:
    double balance;         //hidden from user
    public:
    bankacc(double initialbalance){
        balance=initialbalance;
    }

    void deposit(double amount){             //function exposed to user as in public
        balance+=amount;
    }

    void withdraw(double amount){
        if(amount <=balance){
            balance-=amount;
        }
        else{
            
        }
    }
    void showbalance();
};