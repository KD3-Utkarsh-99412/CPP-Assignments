#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Date{
    private:
     int day, month, year;
    
    // getter and setter functions 
    public:
     bool initDate(){
        day=-1;
        month=-1;
        year=-1;
     }
     int printDateOnConsole(){
        cout<<"Day::Month::Year in the system:\n:\n";
        cout<<day<<"::"<<month<<"::"<<year<<"\n\n";
     };
     void acceptDateFromConsole(){
        
        cin>>day;
        cin>>month;
        cin>>year;
        cout<<"Your Entered Date has been excepted:\n";
     };
     string isLeapYear(){
        if((year%4==0 && year%100!=0) || year%400==0)
          return "is Leap year";
        return " not a Leap year\n";
     };
};

void menuList(){
    cout<<"Enter your Choice b/w 1 to 4 \n\n\n";
    cout<<"Press 0 to exit from the program:\n\n";

    cout<<"Enter 1 for initializing Date :\n";
    cout<<"Enter 2 for Printing Date on console :\n";
    cout<<"Enter 3 for accepting Date From user :\n";
    cout<<"Enter 4 to check if mentioned year is LeapYear or not :\n\n";
};

int main(){
    Date dt; // class of object date named [dt]
    int choice=-1;

    do{
        menuList();
        cin>>choice;

        switch(choice){
            case 1:
              cout<<"Date in the system has been initialise with random value:\n";
              dt.initDate();
              break;
            case 2:
               cout<<"Date in the system is ==>\n";
               dt.printDateOnConsole();
               break;
            case 3:
               cout<<"Enter Date from your keyboard to input in the system:\n";
               cout<<"Enter in Day::Month::Year [one-by-one] \n";
               dt.acceptDateFromConsole();
               break;
            case 4:
                cout<<"Is"<<dt.isLeapYear();
                break;
            Default: 
              cout<<"You Enter wrong number";
        }

    }
    while(choice!=0);

    cout<<"Program has been closed as per your choice :\n";

    return 0;
}