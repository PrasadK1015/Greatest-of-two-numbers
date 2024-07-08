#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter values of x,y and z : ";
    cin>>x>>y>>z;
    cout<<"Value of x is "<<x<<"\nValue of y is "<<y<<"\nValue of z is "<<z<<endl;
    if(x>y && x>z){
       if(y*y + z*z == x*x ){
        cout<<"are pythagorean triplet"<<endl;
       }else{
        cout<<"Entered numbers are not pythagorean triplets"<<endl;
       }
    }else if(y>x && y>z){
        if(x*x + z*z == y*y ){
        cout<<"are pythagorean triplet"<<endl;
        }else{
        cout<<"Entered numbers are not pythagorean triplets"<<endl;
        }
    }else{
        if(x*x + y*y == z*z ){
        cout<<"are pythagorean triplet"<<endl;
        }else{
        cout<<"Entered numbers are not pythagorean triplets"<<endl;
        }
    }

    
}    