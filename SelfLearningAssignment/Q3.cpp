#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class student{
    private:
     int rollNo;
     int marks;

    public:
    student() : {};
    student(int rollNo, int marks)  : rollNo(rollNo), marks(marks)  {};

};

int MenuList(){
    cout<<"Choose your option :\n";
    cout<<"1. \n";

};
int main(){

    int size;
    cout<<"\nEnter the number of students which you want to put in the dataBase :\n";
    cin>>size;

    student *stu_array= new student[size]; 

    int choice;
    int c;

    while(c=(::MenuList(choice))!=0){

    }


    return 0;
}