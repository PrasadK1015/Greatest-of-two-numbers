#include<iostream>
using namespace std;

int main(){
    char alpha;
    cout<<"Enter a character : ";
    cin>>alpha;

    if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
       alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {
        cout<<"Entered character is vowel"<<endl;
    }else{
        cout<<"Entered character is not vowel"<<endl;
    }
}