#include<iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    double marks;
public:
    void accept()
    {
        cout<<"Enter roll number: ";
        cin>>rollNo;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"Roll No: "<<rollNo<<", Marks: "<<marks<<endl;
    }

    double getMarks()
    {
        return marks;
    }
};

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    Student *students=new Student[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        students[i].accept();
    }

    cout<<"\nAll Student Records:"<<endl;
    for(int i=0;i<n;i++)
        students[i].display();

    int highest=0;
    for(int i=1;i<n;i++)
    {
        if(students[i].getMarks()>students[highest].getMarks())
            highest=i;
    }

    cout<<"\nStudent with Highest Marks:"<<endl;
    students[highest].display();

    delete[] students;

    return 0;
}