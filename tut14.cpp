#include<iostream>
using namespace std;
//  structure
typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep ; 

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
}  ;

int main(){
    enum meal{ breakfast ,lunch,dinner};
    meal m1 =lunch;
    cout<<m1;
    // cout<< breakfast;
    // cout<<dinner;
    // cout<<lunch;

    // struct employee soha; 
    // union money m1;
    // m1.rice = 35;
    // cout<<m1.rice;
    // soha.eid = 1224;
    // soha.favchar = 'c';
    // soha.salary = 120000000;
    // cout<<"the value is" <<soha.salary<<endl;
    // cout<<"the value is" <<soha.eid<<endl;
    // cout<<"the value is" <<soha.favchar<<endl; 
return 0; 
}