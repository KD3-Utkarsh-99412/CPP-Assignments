#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;


class Product{
    private:
    //  Product *arr[3];

     int id;
     string title; 
     double price; // common data-member 

    public:
        Product() : id(0), title(""), price(0) {}

        Product(int id, string title, double price) : id(id), title(title), price(price) {}

        virtual ~Product() {}
    
    // getters n setter functions
    virtual void AcceptRecord(){ // Common to both book and class 
        cout<<"Enter id : "<<endl;
        cin>>id;
        cout<<"Enter title :"<<endl;
        cin>>ws;
        getline(cin, title);
        cout<<"Enter price : "<<endl;
        cin>>price;
    };

    virtual void PrintRecord(){
        cout<<"Id :: "<<id<<endl;
        cout<<"Title :: "<<title<<endl;
        cout<<"Price :: "<<price<<endl;
    }

    double getPrice() const{
        return price;
    }

    virtual double discount() const = 0;

    // Common Bill Calculation;
    double CalculateBill() const{
        return price-discount();
    };

};

class Book : public Product{
    private:
     string author;
    
    public:
    Book() {};
    Book(int id, string title, double price, string author) : Product(id, title, price), author(author) {}

    // getter/setter 
    void AcceptRecord(){
        Product::AcceptRecord();
        cin>>author;
    }
    void PrintRecord(){
       Product::PrintRecord();
       cout<<"Author :: "<<author<<endl;
    }

    
    // discount 
    double discount() const{
        return (getPrice()*0.01);
    }



};
class Tape : public Product{
    private:
      string artist;

    public:
     Tape(){};
     Tape(int id, string title, double price, string artist) : Product(id,title,price), artist(artist) {};

     // getter/setter 
     void AcceptRecord(){
        Product::AcceptRecord();
        cin>>artist;
     }
     void PrintRecord(){
        Product::PrintRecord();
        cout<<"Artist :: "<<artist;
     
    }
    double discount() const{
        return (getPrice()*0.05);
    }

};


int MenuList(int choice){
    cout<<"Enter your choice user :: "<<endl;
    cout<<"0. Press 0 to-Exit-Program:: "<<endl;

    cout<<"1. To Buy Book :: "<<endl;
    cout<<"2. To Buy Tape :: "<<endl;
    
    cout<<"3. To check your current Bill"<<endl;

    cin>>choice;
    return choice;
};

int main(){

    int choice = -1;
    vector<Product*> products;

    while((choice = MenuList(choice)) != 0){


        switch(choice){
         case 1:{ // To Buy Books;
            cout<<"You choose to Buy Books"<<endl;
            Product *book = new Book();
            book->AcceptRecord();
            products.push_back(book);
            break;
         }
         case 2:{ // To Buy Tape;
            cout<<"You choose to Buy Tape"<<endl;
            Product *tape = new Tape();
            tape->AcceptRecord();
            products.push_back(tape);
            break;
         }
         case 3:{
            cout<<"You choose to print your Bill :"<<endl;
            double total = 0;
            for(size_t index = 0; index < products.size(); index++){
                Product *product = products[index];

                if(typeid(*product) == typeid(Book)){
                    Book *book = static_cast<Book *>(product);
                    book->PrintRecord();
                }
                else if(typeid(*product) == typeid(Tape)){
                    Tape *tape = static_cast<Tape *>(product);
                    tape->PrintRecord();
                }

                cout<<"Discount :: "<<product->discount()<<endl;
                cout<<"Net Price :: "<<product->CalculateBill()<<endl<<endl;
                total += product->CalculateBill();
            }
            cout<<"Total Bill :: "<<total<<endl;
            break;
         }
         default:
          cout<<"Please choose numbers from within the option :\n";
        }
    }

    for(Product *product : products){
        delete product;
    }

    return 0;
}