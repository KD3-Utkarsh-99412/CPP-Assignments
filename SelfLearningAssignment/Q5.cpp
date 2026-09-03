#include<iostream>
using namespace std;

int myStrlen(const char *str)
{
    int length=0;
    while(str[length]!='\0')
        length++;
    return length;
}

void myStrcpy(char *destination,const char *source)
{
    int i=0;
    while(source[i]!='\0')
    {
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';
}

int main()
{
    char str1[100];
    char str2[100];

    cout<<"Enter a string: ";
    cin>>str1;

    cout<<"Length = "<<myStrlen(str1)<<endl;

    myStrcpy(str2,str1);

    cout<<"Copied string = "<<str2<<endl;

    return 0;
}