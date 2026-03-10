#include <iostream>
using namespace std;
class library{
    private:                                //abstraction
    int book_number;
    public:                                 //encapsulation
    string bookname;
    string author;

    void book(string bn,string ath){
        cout<<"book name is :"<<bn<<endl;                    
        cout<<"author is:"<<ath<<endl;
    }

    void book(int bk_n,string bn,string ath){              //polymorphism
        cout<<"book number is:"<<bk_n<<endl;
        cout<<"book name is :"<<bn<<endl;
        cout<<"author is:"<<ath<<endl;
    }
};
class available:public library{                      //inheritance
    public:
    int av;
    void display_availability(int av){
        library lib;
        cout<<"available books are :"<<av<<endl;
    }
};
int main(){
    available book_av;
    book_av.book("abc","xyz");
    book_av.book(1,"abc","xyz");
    book_av.display_availability(10);
    book_av.book(2,"abcd","uvwxyz");
    book_av.display_availability(5);

    return 0;
}