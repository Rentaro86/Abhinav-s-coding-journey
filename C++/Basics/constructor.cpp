#include<iostream>
using namespace std;



class A{
  public:
  int a;
  A() {
   a = 0;
  }
  A(int a): a(a) {}
  A(A& obj) {
    a = obj.a;
  }
  A(A&& obj) {
    a = obj.a;
  }
  friend void test(A& obj) {
  }
void display() {
    cout<<"value "<<a<<endl;
}


};

void test(A& obj) {
 cout<<" check "<<obj.a<<endl;
}

int main() {

A a1;
A a2(6);
A a3 = a2;
a1.display();
a2.display();
a3.display();


return 0;

}