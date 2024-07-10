#include<iostream>
using namespace std;
int main(){
    int num[]={1,2,3,10,4,5};
    int maxnum=num[0];
    for(int i=0;i<=5;i++){
        if(maxnum < num[i]){
            maxnum = num[i];
        }else{
            continue;
        }
    }cout<<"Maximum number in the array is : "<<maxnum<<endl;
}