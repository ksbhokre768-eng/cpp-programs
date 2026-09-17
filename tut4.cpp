#include<iostream>

using namespace std;
void sum(int a , int b){
    cout<<"Sum is : "<<a+b<<endl;
}

int main(){
    // int a=4;
    // int b=5;
    int a=4, b=35; 
    float pi=3.14;
    char c='u' ;
    cout<<"tutorial four.\n here value of a is "<<a<<" .\nthe value of b is "<<b ;
    cout<<"\nvalue of pi is:"<<pi;
    cout<<"\nvalue of c is:"<<c;

    cout<<"To find the sum of a and b where a is 8 and be is 9: "<<endl;
    sum(9, 8);
    return 0;
}