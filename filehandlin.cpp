#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream file("data.txt"); 
    string text;
    while(getline(file,text)){
        cout<<text<<endl;
    }
    file.close();
    return 0;
}