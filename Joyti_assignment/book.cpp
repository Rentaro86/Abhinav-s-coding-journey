//Design a book class with attributes like title author price and member function to set and get these value include a constructor

#include<iostream>
#include<string>
#include<vector>
#include<limits>
using namespace std;

class book{
    public:
    string tittle;
    string author;
    int price;
    book(const string& tittle, const string& author, int price)
    : tittle(tittle), author(author), price(price) {}

    void setvalues(const string& tittle,const string& author,int price) {
        this-> tittle = tittle;
        this-> author = author;
        this-> price = price;
    }
    string gettittle() const {return tittle; };
    string getauthor() const {return author; };
    int getprice() const {return price; };
     




};

void valid(int& a) {
    while (true) {
        cin>>a;
        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"invalid input try again please "<<endl;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            break;
        }
    }

}

int main() {
    vector<book> books;
    int price;
    string author;
    string tittle;
    int choice,index;
    cout<<"Welcome to Abhinav's library management system "<<endl;

    do {
        
        cout<<"Press 1 to Create a new book "<<endl;
        cout<<"Press 2 to view a existing book "<<endl;
        cout<<"Press 3 to show all the stored book in library "<<endl;
        cout<<"press 4 to remove a book from the libray of your choice "<<endl;
        cout<<"Press 0 to exit the library management system "<<endl;
        
        valid(choice);
        
        switch(choice) {
        case 1:
        cout<<"Please Enter the detail of the book you want to store in the data base "<<endl;
        cout<<"Enter Tittle of the book "<<endl;
        getline(cin,tittle);
        cout<<"Enter author of the book "<<tittle<<endl;
        getline(cin,author);
        cout<<"Enter the MRP for the book "<<tittle<<endl;
        valid(price);
        books.emplace_back(tittle,author,price);
        //use books.setvalues(tittle,author,price) in program without vector, setvalue function is useless in this program since we are using vector
        break;
        case 2:
        if (books.empty()) {
            cout<<"There are no books in the library yet "<<endl;
            break;
        }
        else {
        cout<<"choose which book do you want to read from the library (index 0 to "<<books.size()-1<<")"<<endl;
        valid(index);
        cout<<"Tittle: "<<books[index].gettittle()<<endl;
        cout<<"by "<<books[index].getauthor()<<endl;
        cout<<"cost "<<books[index].getprice()<<endl;

        }
        break;
        case 3:
        if(books.empty()) {
            cout<<"There are no book in the library to show "<<endl;
            break;
        }
        else {
        cout<<"List of all the available books in the library "<<endl;
        for(size_t i=0;i<= books.size();i++) {
            cout<<"index "<<i<<"\nTittle: "<<books[i].gettittle()<<endl;
        cout<<"by "<<books[i].getauthor()<<endl;
        cout<<"cost "<<books[i].getprice()<<endl;
        }
        }
        break;
        case 4:
        if (books.empty()) {
            cout<<"nothing to delete "<<endl;
        }
        else {
        cout<<"Choose which book do you want to remove from the library "<<endl;
        cout<<"Choose form index from 0 to "<<books.size()-1<<endl;
        valid(index);
        books.erase(books.begin()+index);
        }



        break;
        case 0:
        cout<<"Exiting the library management system now "<<endl;
        break;

        } 



    

    } while(choice != 0);


   return 0;

}