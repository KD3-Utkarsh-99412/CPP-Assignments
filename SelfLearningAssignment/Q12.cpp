#include<iostream>
#include<string>
using namespace std;

class Product
{
protected:
    string title;
    double price;
public:
    virtual void accept()=0;
    virtual void display()=0;
    virtual ~Product()
    {
    }
};

class Book:public Product
{
private:
    int pages;
public:
    void accept()
    {
        cout<<"Enter book title: ";
        cin>>title;

        cout<<"Enter book price: ";
        cin>>price;

        cout<<"Enter pages: ";
        cin>>pages;
    }

    void display()
    {
        cout<<"Book Pages: "<<pages<<endl;
    }
};

class Tape:public Product
{
private:
    double playtime;
public:
    void accept()
    {
        cout<<"Enter tape title: ";
        cin>>title;

        cout<<"Enter tape price: ";
        cin>>price;

        cout<<"Enter playtime: ";
        cin>>playtime;
    }

    void display()
    {
        cout<<"Tape Playtime: "<<playtime<<endl;
    }
};

int main()
{
    Product **arr=new Product*[5];
    int choice;

    for(int i=0;i<5;i++)
    {
        cout<<"\n1. Book\n2. Tape\nEnter choice: ";
        cin>>choice;

        if(choice==1)
            arr[i]=new Book;
        else
            arr[i]=new Tape;

        arr[i]->accept();
    }

    cout<<"\nProduct Details:"<<endl;

    for(int i=0;i<5;i++)
    {
        arr[i]->display();
        delete arr[i];
    }

    delete[] arr;

    return 0;
}