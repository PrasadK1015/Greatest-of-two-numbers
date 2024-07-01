            // To enter correct number until -1 is entered
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a guess : ";
    cin>>n;
    while(true){
        if(n==-1){
            cout<<"You entered correct number"<<endl;
            break;
        }else{
            while(n!=-1){
                cout<<"Enter another guess : ";
                cin>>n;
            }
        }
    }
}