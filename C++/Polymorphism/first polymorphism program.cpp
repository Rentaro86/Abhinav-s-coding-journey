#include <iostream>
using namespace std;

// Base class
class Operation {
public:
    virtual void getInput() = 0;   // pure virtual
    virtual void calculate() = 0;  // pure virtual
    virtual ~Operation() {}        // virtual destructor
};

// Sum operation
class SumOperation : public Operation {
    int num1, num2;
public:
    void getInput() override {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void calculate() override {
        cout << "Sum = " << num1 + num2 << endl;
    }
};

// Square operation
class SquareOperation : public Operation {
    int num;
public:
    void getInput() override {
        cout << "Enter one number: ";
        cin >> num;
    }
    void calculate() override {
        cout << "Square = " << num * num << endl;
    }
};

int main() {
    int choice;
    do {
        cout << "Press 1 for sum, 2 for square, 3 to exit: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Try again." << endl;
            continue;
        }

        Operation* op = nullptr;  // base class pointer

        if (choice == 1) op = new SumOperation();
        else if (choice == 2) op = new SquareOperation();
        else if (choice == 3) break;
        else {
            cout << "Invalid choice!" << endl;
            continue;
        }

        op->getInput();      // polymorphic call
        op->calculate();     // polymorphic call
        delete op;           // clean up dynamically allocated object

    } while (choice != 3);

    return 0;
}
