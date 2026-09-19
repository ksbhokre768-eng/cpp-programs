#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=(a+b);
    return c;
}
// this will not swap
int swap(int a ,int b){ 
    int temp=a;         
    a=b;
    b=temp;

}
    void swappointers(int *a ,int *b){ 
    int temp=*a;         
    *a=*b;
    *b=temp;
}
    void swaprefrancevar(int &a ,int &b){ 
    int temp=a;         
    a=b;
    b=temp;
     
}
int & swapreferancevar(int &a ,int &b){ 
    int temp=a;         
    a=b;
    b=temp;
    return a;
 
}
int main(){
    int a=4,  b=5;
//  cout<<"sum of 4&5 is "<<sum(4,5)<<endl; 
    // cout<<"the value ofa is  "<<a<<"\nvalue of b is "<<b<<endl;
    // swap( a,b); this will not swap a and b
    //  swappointers(&a,&b); //this will swap
    //  swaprefrancevar(a,b);// this will swap
    swapreferancevar(a,b) =69; 
    cout<<"the value of a is  "<<a<<"\nvalue of b is "<<b<<endl;
  return 0; 
}