#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
            // TO FIND PRIME NUMBER
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        if(n%n==0 && n>1 && n!=0){
                cout<<"Number entered is a prime number"<<endl;
        }
        else{
                cout<<"Number entered is not prime number"<<endl;
        }

}