#include<iostream>

using namespace std;
int main(){
    // selection control structure if else
    // cout<<"this is tutorial 9"; 
    int pass;
    cout<<" tell me your pass"<<endl;
 cin>>pass;
//  if((age<18) && (age>10)){
//  cout<<"you are not allowed"<<endl;
//  }
//  else if(age==18){
//  cout<<"you to get in need permisssion"<<endl;
//    }
//    else if(age<12){
//    cout<<"you not yet born"<<endl;
//    }
//    else{
//     cout<<"you can come in party"<<endl;
//    } 
//  selection control system switch case

    switch (pass)
    {
    case 100:
        cout<<"your pass is correct  "<<endl;
        break;

    default:
        cout<<"no match "<<endl;
        cout<<"try again"<<endl;
        break;
    }

    

    return 0;
}