#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Time{

    private:
    int hrs, mins, secs;
    
    public:
    Time() : hrs(0), mins(0), secs(0) {}
    Time(int hrs, int mins, int secs) : hrs(hrs), mins(mins), secs(secs) {}

    // getter Functions 
    int getHour(){
        return hrs;
    }
    int getMinutes(){
        return mins;
    }
    int getseconds(){
        return secs;
    }

    // setter functions
    void setHour(int hrs){
        this->hrs=hrs;
    }
    void setMinute(int mins){
        this->mins=mins;
    }
    void setSeconds(int secs){
        this->secs=secs;
    }

    // Helper function 
    void printTime(){
        cout<<hrs<<"::"<<mins<<"::"<<secs<<"\n";
    }
};


int MenuList(int choice){
     cout<<"\n1. Add Time:\n";
     cout<<"2. Display All Time:\n";
     cout<<"3. Display only hrs of all time objects [Present in the Time array] :\n";
     cout<<"4. Enter 0-Exit-To-Exit :\n";
     cout<<"4. Enter your Choice :\n";

     cin>>choice;
     return choice;
}


int main(){

    int size;
    cout<<"\nWeclome to the program user :\n";
    cout<<"\nEnter the size for the Array-of-Objects-Time :\n";
    cin>>size;    

    int choice=-1;
    int c;

    Time *T=new Time[size]; // Dynamically allocating the value "size" number of times after getting the input from the user 

    while((c=MenuList(choice))!=0){

        switch(c){
            case 1:{
                cout<<"You Choose to add time :\n";
                int hrs, mins, secs;
                cout<<"Hours :: "<<"Mins ::"<<"Secs :: "<<"[One-by-One]\n";
                for(int i=0; i<size; i++){
                   cin>>hrs>>mins>>secs;

                   T[i].setHour(hrs);            
                   T[i].setMinute(mins);
                   T[i].setSeconds(secs); 
                }
                break;        

            }
            case 2:{
                cout<<"You choose to Display all time:\n [[Store in each element-of-array-of-objects-of-time]]:\n";
                for(int idx=0; idx<size; idx++){
                    T[idx].printTime();
                }
                break;
            } 
            case 3:{
                cout<<"You choose to Display only hrs of all-time-object :\n\n";
                for(int idx=0; idx<size; idx++){
                    cout<<idx<<" "<<T[idx].getHour()<<" ";
                }
                break;
            }
            default:
              cout<<"You choose wrong Option :\n";
        }
    }
    delete []T; // freeing up the T pointer which is a pointer to Array-Of-Objects
    T=NULL;

    
    return 0;
}