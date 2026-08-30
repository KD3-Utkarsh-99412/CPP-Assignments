#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Date{
    private:
     int date, month, year;

    public:
    // Constructor 
    Date(){};
    Date(int date, int month, int year) : date(date), month(month), year(year) {};

    // member function to accept value -n-print stored values 
    void accept(){
        this->date=date;
        this->month=month;
        this->year=year;
    }
    void print(){
        cout<<"Date is==> "<<date<<"::"<<month<<"::"<<year<<"\n";
    }
};

class Person{
    private:
     int name; 
     string address;
     Date birthday;
    
    // ctors 
    public:
    Person(){};
    Person(int name, string address,  Date birthday) : name(name), address(address), birthday(birthday) {}
};

class Student{
    private: 
     int id, marks;
     string course;
     Date joiningDate, endDate;
    
    // ctors 
    public:
     Student(){};
    //  student(int id, string course, Date joiningDate, Date endDate) : id(id), course(course), joiningDate(joiningDate), endDate(endDate) {}

     Student(int id, string course, int jd, int jm, int jy, int ed, int em, int ey) : id(id), course(course), joiningDate(jd,jm,jy), endDate(ed,em,ey) {}

    // getter 
    // void get_student(int id, string course, Date joiningDate, Date endDate){

    //     cout<<"Details of the students is :\n";
    //     cout<<"id :"<<id<<" "<<"course "<<course<<" ";
    //     joiningDate.print();
    //     endDate.print();
    // }
    void get_student(Student){

        cout<<"\nDetails of the students is :\n\n";
        cout<<"id :: "<<this->id<<" "<<"\ncourse :: "<<this->course<<"\n";
        joiningDate.print();
        endDate.print();
    }
};


int main(){
    // Date d1(8, 21, 2026);
    // Date d2(3, 21, 2027);


    // student s(99412, "Dac", d1, d2);

    Student s(99412, "Dac", 7,8,2026 , 4,3,2027);

    s.get_student(s);

    return 0;
}