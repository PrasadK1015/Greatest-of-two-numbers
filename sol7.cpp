#include <iostream>
using namespace std ;

int main(){

    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>18){
        cout<<"Adult"<<endl;
    }
    else if(12<age<18){
        cout<<"Teenager"<<endl;
    }
    else{
        cout<<"child"<<endl;
    }
    
}