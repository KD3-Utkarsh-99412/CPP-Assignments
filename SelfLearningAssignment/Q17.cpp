#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    double marks;
public:
    void accept()
    {
        cout<<"Enter roll number: ";
        cin>>rollNo;

        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    void save()
    {
        ofstream file("student.txt");

        file<<rollNo<<endl;
        file<<name<<endl;
        file<<marks<<endl;

        file.close();
    }

    void load()
    {
        ifstream file("student.txt");

        file>>rollNo;
        file>>name;
        file>>marks;

        file.close();
    }
};

int main()
{
    Student s1,s2;

    cout<<"Enter student details:"<<endl;
    s1.accept();

    s1.save();

    cout<<"\nStudent loaded from file:"<<endl;

    s2.load();
    s2.display();

    return 0;
}