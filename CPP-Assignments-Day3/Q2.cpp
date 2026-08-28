#include<bits/stdc++.h>
using namespace std;

class Tollbooth{
    private:
     unsigned int TotalCars;
     double Amount;
     int TotalCars_paid;
     int TotalCars_unpaid;

    public:
     Tollbooth(){  // Constructor to initailize all data members to 0
        TotalCars_paid=0;
        TotalCars_unpaid=0;
        Amount=0;
     }

    // Member functions 
    void payingCar(){
        TotalCars_paid++;
        Amount+=.50;
    }
    void nopayCar(){
        TotalCars_unpaid++;
    }

    // Getter 
    void printOnConsole(){
        cout<<"Total number of cars gone ==>:"<<(TotalCars_paid+TotalCars_unpaid)<<"\n";
        cout<<"Total number of cars gone and paid toll =>"<<TotalCars_paid<<"\n";
        cout<<"Total number of cars gone and paid toll =>"<<TotalCars_paid<<"\n";
    }
    void get_PaidCarCount(){
        cout<<"Total cars who paid amount to cross toll is==>::: "<<TotalCars_paid<<"\n";
    }
    void get_UnpaidCarCount(){
        cout<<"Total cars who paid amount to cross toll is==>::: "<<TotalCars_unpaid<<"\n";
    }
    void get_TotalCarPassed(){
        cout<<"Total cars passed the toll ==>::: "<<TotalCars_paid+TotalCars_unpaid<<"\n";
    }
};

int MenuList(){
    cout<<"\nEnter your Choice in the TollBoth \t : \t";
    cout<<"Choose between 1-to-5 and [0-to-Print on the Console]\n\n";

    cout<<"1. If you want to cross the tollBoth and pay\n";
    cout<<"2. If you want to cross the tollBoth without paying\n";

    cout<<"3. Print the Total Numbers of Cars Gone through the TollBoth and [Paid for that] :\n";
    cout<<"4. Print the Total Numbers of Cars Gone through the TollBoth and [Did not paid for that] :\n\n";

    int c;
    cin>>c;

    return c;
};

int main(){

    Tollbooth TT; // Class object TT called with default constructors 
    int v;

    while(true){
  
        v=(MenuList());

        if(v==0)
          break;

        switch(v){
            case 1:{
                TT.payingCar();
                cout<<"You have paid the toll for the car\n";
                break;
            }
            case 2:{
                TT.nopayCar();
                cout<<"You have [Not-Paid] the toll for the car\n";
                break;
            }
            case 3:{
                TT.get_PaidCarCount();
                break;
            }
            case 4:{
                TT.get_UnpaidCarCount();
                break;
            }
            default:
              cout<<"You choose wrong option:\n";
        }
    }
    cout<<"You pressed 0 and exited the Program.\n";

    return 0;
}