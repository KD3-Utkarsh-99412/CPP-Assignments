#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Cylinder{
    private:
       double height, radius;
       static double PI;
    
       public:
        // Constructors -> Why was asked by the question to code;
         Cylinder() : height(0), radius(0) {}
         Cylinder(double height, double radius) : height(height), radius(radius) {}
        
        // setter functions 
        void setRadius(double radius){
            this->radius=radius;
        }
        void setHeight(double height){
            this->height=height;
        }
        // getter functions
        double getRadius(){
            return radius;
        }
        double getHeight(){
            return height;
        }
        double getVolume(){
            return height*radius*radius*PI;
        }
};

double Cylinder::PI=3.14;

int MenuList(){
    cout<<"\nWelcome to the program user :\n\n";
    int c;
    cout<<"Press 0-To-Exit Program:\t";
    cout<<"Any other number to continue\n";

    cin>>c;
    return c;
}

int main(){

    int radius, height, choice;
    Cylinder c1;

    while(true){

        choice=MenuList();
        
        if(choice==0){
            cout<<"You Choose to Exit from the Program:\n";
            break;
        }
        else {
            cout<<"Please Enter Radius and Height [One-By-One] :\n";
            cin>>radius>>height;

            // Cylinder c1(radius,height);
            // Cylinder c1;

            c1.setHeight(height);
            c1.setRadius(radius);
            cout<<"Volume of the Cylinder ==>"<<c1.getVolume()<<"\n";
        }
    }
    return 0;
}