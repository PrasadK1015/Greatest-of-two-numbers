            // GREATEST OF THREE NUMBERS
#include <iostream>
using namespace std ;

int main(){

int x,y,z;
cin>>x>>y>>z;
cout<<"Value of x is "<<x<<"\nValue of y is "<<y<<"\nValue of z is "<<z<<endl;
if(x>y && x>z){
    cout<<"x is greatest of three numbers"<<endl;
}else if(y>x && y>z){
    cout<<"y is the greatest of the three numbers"<<endl;
}else{
    cout<<"z is the greatest of the three numbers"<<endl;
};

}