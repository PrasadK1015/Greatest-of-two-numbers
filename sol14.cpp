#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,3,4};
    int size =sizeof(nums)/sizeof(nums[1]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=nums[i];
    }
    cout<<sum<<endl;
}