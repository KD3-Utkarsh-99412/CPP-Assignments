#include<iostream>
using namespace std;

class Student
{
public:
    void display()
    {
        cout<<"Student details"<<endl;
    }
};

class SmartPointer
{
private:
    Student *ptr;
public:
    SmartPointer(Student *p)
    {
        ptr=p;
    }

    ~SmartPointer()
    {
        delete ptr;
    }

    Student *operator->()
    {
        return ptr;
    }
};

int main()
{
    try
    {
        SmartPointer s(new Student);

        s->display();

        throw "Invalid input";
    }
    catch(...)
    {
        cout<<"Invalid input"<<endl;
    }

    return 0;
}