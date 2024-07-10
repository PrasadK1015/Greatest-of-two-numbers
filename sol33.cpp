#include<iostream>
using namespace std;
int main(){
    int num[]={1,8,3,10,4,5};
    int minnum=num[0];
    for(int i=0;i<=5;i++){
        if(minnum >num[i]){
            minnum = num[i];
        }else{
            continue;
        }
    }cout<<"Maximum number in the array is : "<<minnum<<endl;
}