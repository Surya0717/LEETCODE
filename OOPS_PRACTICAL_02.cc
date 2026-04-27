#include<iostream>

using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"ENTER NUM1,NUM2,NUM3-";
    cin>>num1>>num2>>num3;
    if(num1==num2){
        if(num1>num3){
            cout<<num1<<"and"<<num2<<"are same and greater than"<<num3;
        }
        else if(num1<num3){
            cout<<num1<<"and"<<num2<<"are same and smaller than"<<num3;
        }
    }
    else if(num1==num3){
        if(num1>num2){
            cout<<num1<<"and"<<num3<<"are same and greater than"<<num2;
        }
        else if(num1<num2){
            cout<<num1<<"and"<<num3<<"are same and smaller than"<<num2;
        }
    }
    else if(num2==num3){
        if(num2>num1){
            cout<<num2<<"and"<<num3<<"are same and greater than"<<num1;
        }
        else if(num2<num1){
            cout<<num2<<"and"<<num3<<"are same and smaller than"<<num1;
        }
    }
    else if(num1>num2&&num1>num3){
        cout<<num1<<"is greater than"<<num2<<"and"<<num3;
    }
     else if(num2>num1&&num2>num3){
        cout<<num2<<"is greater than"<<num1<<"and"<<num3;
    }
     else if(num3>num1&&num3>num2){
        cout<<num3<<"is greater than"<<num1<<"and"<<num2;
    }
    else if(num1==num2&&num2==num3){
        cout<<num1<<num2<<num3<<"all are equal";
    }
    return 0;
}

