#include<stdio.h>
#include<conio.h>


struct Date{
    int day, month, year; 
};

void initDate(struct Date* ptrDate){
    ptrDate->day=15;
    ptrDate->month=7;
    ptrDate->year=1947;

    printf("Value has been initialised:\n\n");
}

void printDateOnConsole(struct Date* ptrDate){
    printf("Date:Month:Year ==>:%d::%d::%d\n\n",(*ptrDate).day, (*ptrDate).month, (*ptrDate).year);
}

void acceptDateFromConsole(struct Date* ptrDate){

    scanf("%d",&ptrDate->day);
    scanf("%d",&ptrDate->month);
    scanf("%d",&ptrDate->year);
}

int MenuList(){

    int choice;
    printf("\n\nEnter your choice between 1-to-3 and 0-to-Exit:\n\n");
    printf("Enter 1 to init-Date:\n");
    printf("Enter 2 to print Date on Console:\n");
    printf("Enter 3 to acceptDateFromConsole:\n\n");

    scanf("%d",&choice);

    return choice;

};

int main(){
    struct Date dt;

    int choice=-1;

    while((choice=MenuList())!=0){

       if(choice==1){
         initDate(&dt);
       }
       else if(choice==2){
        printDateOnConsole(&dt);
       }
       else if(choice==3){
        printf("Enter day::month::year [one by one]:\n");
        acceptDateFromConsole(&dt);
       }
       if(choice>3)
           break;
    }

    printf("You opted to exit from the program:\n");

    return 0;
}