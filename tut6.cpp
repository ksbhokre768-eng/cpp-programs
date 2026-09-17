#include<iostream>

using namespace std;
int main(){
    int a= 8 ,  b=5;
    cout<<"opraters in c++:"<<endl;
    cout<<" following are  opraters in c++:"<<endl;
    // arethematic opraters
    cout<<"the value of a+b is"<<a+b<<endl;
    cout<<"the value of a-b is"<<a-b<<endl;
    cout<<"the value of a*b is"<<a*b<<endl;
    cout<<"the value of a/b is"<<a/b<<endl;
    cout<<"the value of a%b is"<<a%b<<endl;
    cout<<"the value of a++ is"<<a++<<endl;
    cout<<"the value of a-- is"<<a--<<endl;
    cout<<"the value of ++a is"<<++a<<endl;
    cout<<"the value of --a is"<<--a<<endl;
    // assignment operaters >> used toassign values to variables
    // int a =3, b=6;
// char d='d';
// comparrision opraters
cout<<"the value of a==b is"<<(a==b)<<endl;
cout<<"the value of a!=b is"<<(a!=b)<<endl;
cout<<"the value of a>=b is"<<(a>=b)<<endl;
cout<<"the value of a<=b is"<<(a<=b)<<endl;
cout<<"the value of a>b is"<<(a>b)<<endl;
cout<<"the value of a<b is"<<(a<b)<<endl;
// logical opraters
cout<<"following are the logical opraters in c++"<<endl;
cout<<" the value of(a==b)&& (a>b) logical oprater is"<<((a==b)&&(a>b))<<endl;
cout<<" the value of(a==b)|| (a>b) logical oprater is"<<((a==b)||(a>b))<<endl;
cout<<" the value of(a==b)(! (a>b)) logical oprater is"<<((a==b)||(!(a>b)))<<endl;
    return 0; 
}