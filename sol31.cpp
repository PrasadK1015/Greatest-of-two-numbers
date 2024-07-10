#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter the alphabet whose index is required : ";
    cin>>alpha;
    alpha = tolower(alpha);
    char alphabets[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for(int i=0;i<26;i++){
        if(alphabets[i] == alpha){
            cout<<i+1<<endl;
        }
    }
}