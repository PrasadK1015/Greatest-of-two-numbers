#include<iostream>
using namespace std;

int main(){
    // print square and cube of n natural number
    int n;
    cout<<"Enter value of n : " ;
    cin>>n;

    cout<<"Square values till n are : "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
    cout<<"Cube values till n are : "<<endl;
    for(int j=1;j<=n;j++){
        cout<<j*j*j<<endl;
    }
}