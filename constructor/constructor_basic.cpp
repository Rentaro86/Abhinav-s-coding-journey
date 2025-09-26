#include<iostream>
using namespace std;

class A{
    public:
    int num;
    A(){
        num = 0;
        cout<<"Constructor with default value"<<endl;
    }
    A(int num) {
        this->num = num;
    }
    A(const A &obj) {
        num = obj.num;
        cout<<"value copied "<<num<<endl; }
    ~A() {
    }
    void show() {
        cout<<"value "<<num<<endl;
    }
};
 int main() {
    A a1;
    A a2(20);
    cout<<"This is empty/default constructor "<<endl;
    a1.show();
    cout<<"This is initialized constructor, it takes one value 20 "<<endl;
    a2.show();
    cout<<"This is copy constructor that copied from previous object meaning out put would be 20 again"<<endl;
    A a3 = a2;
    a3.show();
    return 0;
 }

 
