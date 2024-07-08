#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the lengths of sides of triangle : ";
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"Triangle is Equilateral triangle"<<endl;
    }else if(a==b || a==c || b==c ){
        cout<<"Triangle is Isosceles  triangle"<<endl;
    }else{
        cout<<"Triangle is Scalene triangle"<<endl;
    }
}