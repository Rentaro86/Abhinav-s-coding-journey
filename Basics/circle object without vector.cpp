#include<iostream>
#include<limits>
using namespace std;

class circle{
    private:
    double radius;
    
    public:
      //using Constructor so that we can initiallize the radius to 0.
    circle(double r = 0.0) {
        radius = r;
    };
    void setradius(float r) {
        radius = r; /* I used setradius so that I can set the radius of object later that way I can set different radius for different object for circle object*/
        };
    double getradius() const {
        return radius;
        //just in case I want to check the present radius anytime.
        //const is so that it doesn't change to object
    };
    double area() const{
        return 3.14 * radius * radius;
        //const is so that radius doesn't change for the object;
    };
    double circumference() const{
        return 2 * 3.14 * radius;
    };
};

void valid(int& a) {
    while (true) {
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid input try again please " << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            break;
        }
    }
}
    
int main() {
    int choice;
    double r;
    circle one;
    
   
    
    do {
       cout<<"Please chooe 1 for area and 2 for circumference and three for exit"<<endl;
    valid(choice);
    if (choice == 1 || choice == 2) {
     cout<<"Please enter radius"<<endl;
    cin >> r;
     one.setradius(r); }
     
    switch(choice) {
        // we are using Switch to give the user choice between either area or circumference;
    
    case 1:
    cout<<"Area "<<one.area()<<endl;
    break;
    case 2:
    cout<<"circumference "<<one.circumference()<<endl;
    break;
    case 3:
    cout<<"program excuted safely"<<endl;
    break;
    default:
    cout<<"Invalid response"<<endl;
    
}
} while(choice != 3);

    
   return 0; 
}