#include<iostream>
using namespace std;

int main(){
    int bill;
    double tip;
    double newtip;
    float newbill;
    cout<<"Enter the amount on the bill : ";
    cin>>bill;
    cout<<"Enter the amount of tip (in %) : ";
    cin>>tip;

    newtip = tip/100 * bill;
    cout<<newtip <<endl;
    newbill = bill+ newtip;
    cout<<"Your bill with tip is : "<<newbill<<endl;
}