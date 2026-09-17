#include  <iostream>

using namespace std;
int main(){
    cout<<"prime number under 100 are =>\t";
    bool flag = true;
    for(int i=2; i<=100; i++){
        flag = true;
        for(int j=2; j<=i/2; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
            
        }
        if(flag){
            cout<<i<<"\t";
        }
        
    }
    

    return 0;
}