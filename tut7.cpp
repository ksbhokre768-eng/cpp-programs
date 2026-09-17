#include<iostream>

using namespace std;
int c=45;
int main(){ 
    //  int a, b ,c;
    //  cout<<"Enter the value of a: "<<endl;
    //     cin>>a;
    //     cout<<"Enter the value of b: "<<endl;
    //     cin>>b;
    //      c=a+b;
    //      cout<<"The sum of a and b is: "<<c<<endl;
    //      cout<<"The global variable  is: "<<::c<<endl;
    //  float d=4568.768f; 
    //  long double e=4568.768l;
    //  cout<<"the size of 4558.768 is"<< sizeof(4568.768)<<endl;
    //  cout<<"the size of 4558.768 is"<< sizeof(4568.768)<<endl;
    //  cout<<"the size of 4568.768f is"<< sizeof(4568.768f)<<endl;
    //  cout<<"the size of 4568.768F is"<< sizeof(4568.768F)<<endl;
    //  cout<<"the size of 4568.768l is"<< sizeof(4568.768l)<<endl;
    //  cout<<"the size of 4568.768L is"<< sizeof(4568.768L)<<endl;

    //  cout <<"the value of d is:"<<d<<endl<<"the value of e is"<<e<<endl;
    // refrance variables
    // rohan------> monty------> kty---->rtyui------>rd

    // float x=432;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    //  typecasting
    int a=43;
    float b=43.67;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of (float)a is:"<<float(a)<<endl;

    cout<<"value of b is" <<(int)b<<endl;
    cout<<"value of b is" <<int(b)<<endl;
    int c = int(b);
    cout <<"the expression is"<<a+b<<endl;
    cout <<" /n the expression is"<<a+int(b)<<endl;
    cout <<" /n the expression is /n "<<a+(int)b<< endl;

    return 0;
}