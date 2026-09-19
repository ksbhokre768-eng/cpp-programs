#include<iostream>
using namespace std;

//  int sum(int a,int b){
//     int c= a+b;
//     return c;
//  }
// fn prototype
// type fn name-(argument)
 void g();


int sum(int a , int b);
// int sum(int a , int ); not acceptable
// int sum(int  , int ); acceptable
int main(){
    int num1 , num2;
    cout<<"entre frist no."<<endl;
    cin>>num1;
    cout<<"entre second no"<<endl;
    cin>>num2;
    cout<<"sum "<<sum( num1 , num2);
    // num1 num2 are actual parameters
    g();
return 0; 
}
// a b are the formal parameters
 int sum(int a,int b){
    int c= a+b;
    return c;
 }
 void g(){
    cout<<"\nhello";
    
 }