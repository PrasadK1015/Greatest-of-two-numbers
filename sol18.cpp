#include<iostream>
using namespace std;

int main(){
    int n;
        cout<<"Enter a number : ";
        cin>>n;
        int newNum=0;

        while(n!=0){
                int rem = n%10;
                newNum = newNum*10 + rem;
                n/=10;
        }
        cout<<"Reverse of the number is : "<<newNum<<endl;
        if(newNum == newNum){
        
                cout<<"Given number is palindrome"<<endl;
        }else{
                cout<<"Given number is not palindrome"<<endl;
        }
}