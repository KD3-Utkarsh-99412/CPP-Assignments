#include<iostream>
#include<string>
using namespace std;

namespace college
{
    class Student
    {
    private:
        int rollNo;
        string name;
    public:
        Student()
        {
            rollNo=0;
            name="";
        }

        void setRollNo(int r)
        {
            rollNo=r;
        }

        void setName(string n)
        {
            name=n;
        }

        int getRollNo()
        {
            return rollNo;
        }

        string getName()
        {
            return name;
        }

        void display()
        {
            cout<<"Student Roll No: "<<rollNo<<endl;
            cout<<"Student Name: "<<name<<endl;
        }
    };

    class Teacher
    {
    private:
        int id;
        string name;
    public:
        Teacher()
        {
            id=0;
            name="";
        }

        void setId(int i)
        {
            id=i;
        }

        void setName(string n)
        {
            name=n;
        }

        int getId()
        {
            return id;
        }

        string getName()
        {
            return name;
        }

        void display()
        {
            cout<<"Teacher ID: "<<id<<endl;
            cout<<"Teacher Name: "<<name<<endl;
        }
    };
}

int main()
{
    college::Student s;
    s.setRollNo(101);
    s.setName("Rahul");

    college::Teacher t;
    t.setId(501);
    t.setName("Mr. Sharma");

    s.display();
    cout<<endl;
    t.display();

    return 0;
}