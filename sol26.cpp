#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number till which odd numbers are needed to be found : ";
    cin>>n;
    int sum=0;

    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<endl;
            sum+=i;
        }else{
            continue;
        }
    }
    cout<<"Sum of the odd numbers is : "<<sum<<endl;
}