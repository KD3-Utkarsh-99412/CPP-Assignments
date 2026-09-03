#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person(string n,int a)
    {
        name=n;
        age=a;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

    virtual void work()=0;
};

class Student:public Person
{
private:
    double marks;
public:
    Student(string n,int a,double m):Person(n,a)
    {
        marks=m;
    }

    void study()
    {
        cout<<name<<" is studying"<<endl;
    }

    void work()
    {
        cout<<name<<" is studying as a student"<<endl;
    }
};

class Teacher:public Person
{
private:
    double salary;
public:
    Teacher(string n,int a,double s):Person(n,a)
    {
        salary=s;
    }

    void teach()
    {
        cout<<name<<" is teaching"<<endl;
    }

    void work()
    {
        cout<<name<<" is teaching as a teacher"<<endl;
    }
};

int main()
{
    Student s("Rahul",20,85);
    Teacher t("Sharma",45,60000);

    Person *p;

    p=&s;
    p->display();
    p->work();
    s.study();

    cout<<endl;

    p=&t;
    p->display();
    p->work();
    t.teach();

    return 0;
}