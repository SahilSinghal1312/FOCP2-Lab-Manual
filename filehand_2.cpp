#include <fstream>
using namespace std;
int main(){
    ofstream file("data.txt");     //create or open file
    file<<"I LOVE CS!";
    file.close();    //close file 
    return 0;
}
