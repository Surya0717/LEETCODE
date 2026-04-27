#include<iostream>
using namespace std;

class Student{
private:
    int Rollno;
    string name;
    char section;

public:
    void input(){
    cout<<"ENTER ROLL NO";
    cin>>Rollno;
    cout<<"ENTER NAME";
    cin>>name;
    cout<<"ENTER SECTION";
    cin>>section;
    }


    void display(){
        cout<<"\nRollno:-"<<Rollno;
        cout<<"\nName:-"<<name;
        cout<<"\nSection-"<<section;
    }
};
int main(){
    Student s;
    s.input();
    s.display();
}