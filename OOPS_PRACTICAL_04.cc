#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    bool isprime=true;
        if(n <=1){
            isprime=false;
        }
        else{
            for(int i=2;i<n/2;i++){
                if(n%i==0){
                    isprime=false;
                    break;
                }
            }
        }

        if(isprime==true){
            cout<<"PRIME";
        }
        else{
            cout<<"COMPOSITE";
        }
}