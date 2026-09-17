#include<iostream>
using namespace std;
// array
int main(){
 int marks[4] ={23, 45 ,18 ,21}; 
//  cout<<marks[0]<<endl;
//  cout<<marks[1]<<endl;
//  cout<<marks[2]<<endl;

//  //  you can change value of array
//  marks[3]=4567;
//  cout<<marks[3]<<endl; 

// for( int i= 0; i<4 ; i++){
//     cout<<"the value of marks is "<<marks[i]<<endl;
// }

//  using pointers and array
 int* p =marks;

//  cout<<*(p++)<<endl;
//  cout<<*(++p)<<endl;
 cout<<"the value of *p is "<<&p<<endl;
 cout<<"the value of *(p+1) is "<<(*p+1)<<endl;
 cout<<"the value of *(p+2) is "<<(*p+2)<<endl;
 cout<<"the value of *(p+3) is "<<(*p+3)<<endl;
 cout<<"address: "<<&p;
return 0; 
}