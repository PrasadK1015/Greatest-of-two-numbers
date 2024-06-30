#include <iostream>
using namespace std ;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Value of x is "<<a<<"\nValue of y is "<<b<<"\nValue of z is "<<c<<endl;
    if(a>b && a>c){
        cout<<"a is greatest of three numbers"<<endl;
    }else if(b>a && b>c){
        cout<<"b is the greatest of the three numbers"<<endl;
    }else{
        cout<<"c is the greatest of the three numbers"<<endl;
    };
    
}