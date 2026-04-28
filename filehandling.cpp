/* file handling 

iostream - input and output 

ofstream - write into a file   (output file)

ifstream - read from a file    (input file)

fstream - both read + write    */

#include <fstream>
using namespace std;
int main(){
    ofstream file("data.txt");     //create or open file
    file<<"hello c++ file handling!";
    file.close();    //close file 
    return 0;
}