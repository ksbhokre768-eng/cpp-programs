#include<iostream>
using namespace std;

int main(){
 int a=3;
 int* b;
 b = &a;
 cout<<"address of a is "<<b<<endl;
 cout<<"value of b is "<<*b<<endl; 
//  & --->address of oprater
// *----> value at oprater

// pointer to pointer
int** c= &b;
 cout<<" the address of b is "<<&b<<endl;
 cout<<" the address of b is "<<c<<endl;
 cout<<" the value at c is "<<*c<<endl;
 cout<<" the value_at (value_c(c)) is "<<**c<<endl;
 
return 0; 
}