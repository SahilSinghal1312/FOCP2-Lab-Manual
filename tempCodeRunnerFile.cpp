#include <iostream>
using namespace std;
void counter(){
    static int c=0;
    c++;
    cout<<c<<" ";
}
int main(){
    for(int i=0;i<4;i++)
    counter();
    return 0;
}