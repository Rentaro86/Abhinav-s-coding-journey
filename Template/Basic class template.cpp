#include<iostream>
using namespace std;

template<typename T1, typename T2>
class test{
    private:
    T1 a;
    T2 b;
    public:
    test() {}
    test(T1 a,T2 b): a(a),b(b) {}
    void setA(T1 a) {
    this->a = a; }
    void setB(T2 b) {
    this->b = b;
    }
    void display() {
        cout<<"Display fucntion for demonstrating the program "<<a<<" as Integrer and "<<b<<" Float "<<endl;
    }
};

int main() {
    test<int, float>obj;
    obj.setA(23);
    obj.setB(23.1);
    obj.display();
    
    return 0;
}
