#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void swapByValue(int a, int b){

    int temp=a;
    a=b;
    b=temp;

    cout<<"\nAfter swapByValue: ";
    cout<<a<<" "<<b<<endl;
};

void swapByReference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;

    cout<<"After SwapbyReference :";
    cout<<a<<" "<<b<<" \n";
};

int main()
{
    int num1=10;
    int num2=20;

    cout<<"Before swapByValue: ";
    cout<<num1<<" "<<num2<<endl;

    swapByValue(num1,num2);

    cout<<"\nBefore swapByReference: ";
    cout<<num1<<" "<<num2<<endl;
    
    swapByReference(num1,num2);
   
    return 0;

}