#include <iostream>
using namespace std;

class A {
protected:
    int num;
    int num1;
public:
    void setnum(int a,int b) {
        num = a;
        num1 = b;
    }
    int sum() {
        return num + num1;
    }
};

class B : public A {
public:
    void setnum1(int a) {
        num1 = a;
    }
    int square() {
        return num1 * num1;
    }
};

int main() {
    B obj;
    int choice;
    int a, b;

    do {
        cout << "Press 1 for sum, 2 for square, 3 to exit: ";
        cin >> choice;

        // Handle invalid input (non-integer)
        if (cin.fail()) {
            cin.clear(); // reset fail state
            cin.ignore(1000, '\n'); // remove invalid input
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        // Handle valid integers
        if (choice == 1) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            obj.setnum(a, b);
            cout << "Sum = " << obj.sum() << endl;
        }
        else if (choice == 2) {
            cout << "Enter one number: ";
            cin >> b;
            obj.setnum1(b);
            cout << "Square = " << obj.square() << endl;
        }
        else if (choice == 3) {
            cout << "Exiting program." << endl;
        }
        else {
            // This handles any valid integer that's NOT 1,2,3
            cout << "Invalid choice! Please press 1, 2, or 3." << endl;
        }

    } while (choice != 3);

    return 0;
}
