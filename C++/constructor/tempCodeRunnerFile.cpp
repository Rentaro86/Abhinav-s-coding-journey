#include<cstdlib>
#include<iostream>
using namespace std;

int main() {

int choice;
cout<<"Welcome to constructor demonstration program by Abhianv MCA(integrated) 3rd sem "<<endl;
cout<<"1) press 1 to Use a basic program "<<endl;
cout<<"2) press 2 to Use a advanced program "<<endl;
cin>> choice;
if(choice == 1) {
    system("constructor_basic.exe");
}
else if(choice == 2) {
    system("constructor_advanced.exe");
}
else {

    cout<<"invalid response "<<endl;
}
 return 0;
}