#include<iostream>
using namespace std;

int main(){
    int n,first=0,second=1,next;
    cout<<"Enter the number of terms:-";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<first<<" ";

        next=first+second;          //in every loop the value of first will be added to the next....
        first=second;
        second=next;

    }
    return 0;
}