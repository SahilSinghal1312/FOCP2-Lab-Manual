#include<iostream>
using namespace std;
int main(){
    int array[5];
    int even_s=0;
    int odd_s=0;
    for(int i=0;i<5;i++){
        cout<<"enter elements:";
        cin>>array[i];
        if(array[i]%2==0){
            even_s+=array[i];
        }
        else{
            odd_s+=array[i];
        }
    }
    cout<<"even sum:"<<even_s<<endl;
    cout<<"odd sum:"<<odd_s;
    return 0;
    
}