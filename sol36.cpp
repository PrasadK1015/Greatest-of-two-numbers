#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n;
    cout<<"Enter a to find its square root : ";
    cin>>n;
    int root = sqrt(n);
    if(n/root == root){
        cout<<"Entered number is prefect square"<<endl;
    }else{
        cout<<"Entered number is not perfect square"<<endl;
    }
    

    
}