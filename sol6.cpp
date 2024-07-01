#include <iostream>
using namespace std ;

int main(){
        float n;
    cout<<"Enter a number : ";
    cin>>n;
    float sum = 0;

    for(int i=1;i<=9;i++){
        cout<<"Enter another number : ";
        cin>>n;
        sum+=i;
    }
    float avg = sum/10;
    cout<<"Sum of numbers is : "<<sum<<endl;
    cout<<"Average of the terms is : "<<avg<<endl;

    
}