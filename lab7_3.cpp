#include <iostream>
#include<string>
using namespace std;
int main(){
    int age, money;
    double hight;
    string status;
    cout<<"Enter your age:";
    cin>>age;
    if(age<20){
        cout<< "Enter your hight: ";
        cin>>hight;
        if(hight<160){
            cout<<"status = UNFRIEND" ;
            }
            else if(hight<175){
            cout<<"status = FRIEND";
            }
            else if(hight>=175){ 
                cout<<"Enter your money:";
        cin>>money;
        if(money>69000000){
            cout<<"status = MARRIED";
        }
        else{cout<<"status = ONE-NIGHT-STAND";}}
       
    }
    else{
        if(age<30){
        cout<<"Enter your money:";
        cin>>money;
        if(money>10000000){
            cout<<"status = BEST FRIEND";
        }
        else{
            cout<<"status = UNFRIEND";
        }
        }
        else{
            cout<<"status = UNFRIEND";}
    }
    return 0;
}