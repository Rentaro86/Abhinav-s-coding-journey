#include<iostream>
#include<memory>
#include<limits>
#include<vector>
using namespace std;

class calculator{
   public:
   virtual int solve() const = 0;
   virtual ~calculator() {}

};

class add: public calculator{
    public:
    int a,b;
    add(int a,int b): a(a),b(b) {}
    int solve() const override {
        return a + b;
    }
};

class sub: public calculator{
    public:
    int a,b;
    sub(int a,int b): a(a),b(b) {}
    int solve() const override {
        return a - b;
    }

};

int valid(int& a) {
    cin>>a;
    while (true) {
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Ivalid entry please try again "<<endl;
        
    }
    else {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        break;
    }
}
};

int main() {
    vector<unique_ptr<calculator>> calculators;
    int num,num1,choice;
    do {
    cout<<"Enter two number "<<endl;
    valid(num);
    valid(num1);
    cout<<"please 1 to add two numbers "<<endl;
    cout<<"please 2 to subtract two numbers "<<endl;
    valid(choice);
    switch (choice) {
        case 1: {
        auto cal = make_unique<add>(num,num1);
      cout<<" adding two numbers "<<cal->solve()<<endl;
      calculators.push_back(move(cal));
      break; }
      case 2:
        {
       auto cal = make_unique<sub>(num,num1);
  
    cout<<" subtraction two numbers "<<cal->solve()<<endl;
       calculators.push_back(move(cal));
    break;
        }
    case 0: 
    cout<<"Exiting the program "<<endl;
    break;
    }
    } while(choice != 0);
    

    return 0;


}
