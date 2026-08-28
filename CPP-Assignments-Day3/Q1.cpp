#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Volume{
    private:
     int Length, Width, Height;
    
    public:
    Volume(){ // Parameterless Constructor [to implement default values]
        Length=1;
        Width=1;
        Height=1;
    }; 

    Volume(int Length, int Width, int Height) {  // Parameterized (with 3-parameter)
        this->Length=Length;
        this->Width=Width;
        this->Height=Height;
    };
    Volume(int L){ // Sinlge Paramaterized constructor.
        this->Length=L;
        this->Width=L;
        this->Height=L;
    }

    // Functions to find the Volume;
    int get_Volume(){
        return Length*Width*Height;
    }
};


int MenuList(int choice){

    cout<<"Hello user : [TollBoth----MENU-OPTION] :\n";
    cout<<"Enter number between 1-to-3 and press 0-to-Exit:\n\n";

    cout<<"1. Calculate Volume with default values:\n";
    cout<<"2. Calculate Volume with length,breadth and height with same value:\n";
    cout<<"3. Calculate Volume with different length,breadth and height values:\n";

    cin>>choice;
    return choice;
}

int main(){

    int c, choice;

    do{
        int c=MenuList(choice);
        if(c==0)
          break;

        switch(c){
            case 1: { 
                // Volume v;
                Volume v;
                cout<<"You choose Volume with Default Value Option:\n";
                cout<<"Default Volume is :\n"<<v.get_Volume()<<"\n";
                break;
            }
            case 2: {
                // Volume v;
               cout<<"You choose Volume with all same dimension,\n Enter that common Dimension\n";
               int Length;
               cin>>Length;
               
               Volume v(Length);
               cout<<"Volume with all Length-Width-Height same =>"<<v.get_Volume()<<"\n";
               break;
            }
            case 3:{
            //    Volume v;
               cout<<"You choose Volume with all different dimension,\n Enter those 3-Dimension ::\n";
               int Length, Width, Height;
               cin>>Length>>Width>>Height;
            
               Volume v(Length,Width,Height);
               cout<<"Volume with all Length-Width-Height same :==> "<<v.get_Volume()<<"\n";
               break;
            }
            default: 
              cout<<"You choose wrong number :\n";
        }
    }while(true);
    cout<<"You choose to exit from the program:\n";


    return 0;
}