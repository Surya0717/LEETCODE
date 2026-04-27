#include<iostream>

using namespace std;

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=11,b=22;

    cout<<"BEFORE SWAP:-"<<a<<b<<endl;;

    swap(&a,&b);

    cout<<"AFTERR SWAP:-"<<a<<b;
    return 0;
}