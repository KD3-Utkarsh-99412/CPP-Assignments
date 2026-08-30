#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Write an inline function to calculate factorial and calculate power. 


inline void fact(int &num){
   int f=1;

   for(int c=1; c<=num; c++){
     f*=c; 
  }
  cout<<"fact of "<<num<<" "<<f<<"\n"; 
}

inline void pow(int base, int exp){

    int power=1;
    int idx=1;

    while(idx<=exp){

        power*=base;
        idx++;
    }
    cout<<"Power for "<<base<<" and "<<exp<<" "<<power<<"\n";
};


int main(){

    int num;
    cout<<"Enter the number whose factorial you want to find out :\n";
    cin>>num;

    int b, exp;
    cout<<"Enter the base and Exponent to find out power \n";
    cin>>b>>exp;

    fact(num);

    pow(b,exp);


    return 0;
}