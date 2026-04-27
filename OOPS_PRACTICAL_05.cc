#include<iostream>
using namespace std;
int main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};

    int add[2][2],mul[2][2];

    //MATRIX ADDITION
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            add[i][j]=a[i][j] +b[i][j];
        }
    }
    //PRINT ADDITION
    cout<<"ADDITION:-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }

    //MATRIX MULTIPLICATION
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mul[i][j]=0;
            for(int k=0;k<2;k++){
                mul[i][j] +=a[i][k] * b[k][j];
            }
        }
    }
    //PRINT MULTIPLICATION
    cout<<"MULTIPLICATION"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
}