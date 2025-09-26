#include <iostream>
#include <vector>
using namespace std;

class circle {
private:
    double radius;

public:
    circle(double r = 0.0) {
        setradius(r);
    }

    void setradius(double r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Invalid radius, setting to 0.\n";
            radius = 0;
        }
    }

    double getradius() const {
        return radius;
    }

    double getarea() const {
        return 3.14 * radius * radius;
    }

    double getcircumference() const {
        return 3.14 * 2 * radius;
    }
};

class circlemanager {
    vector<circle> circles;

public:
    void addcircle(double r) {
        circles.emplace_back(r);
    }

    void showlist() const {
        if (circles.empty()) {
            cout << "Circle list is empty\n" << endl;
            return;
        }

        cout << "List of all circles so far:\n";
        for (size_t i = 0; i < circles.size(); i++) {
            cout << i << ") Radius: " << circles[i].getradius() << endl;
            cout << i << ") Area: " << circles[i].getarea() << endl;
            cout << i << ") Circumference: " << circles[i].getcircumference() << endl;
        }
    }

    void deletecircle(int indx) {
        if (indx >= 0 && indx < (int)circles.size()) {
            circles.erase(circles.begin() + indx);
            cout << "Circle deleted\n";
        } else {
            cout << "Index is invalid\n" << endl;
        }
    }
};

int main() {
    circlemanager manager;
    int choice;

    do {
        cout << "\nPress a number to perform an operation on circles:\n";
        cout << "1. Add circle\n"
             << "2. List circles\n"
             << "3. Delete circle\n"
             << "4. Exit\n"
             << "Choice: ";

        cin >> choice;

        if (choice == 1) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            manager.addcircle(r);
        } else if (choice == 2) {
            manager.showlist();
        } else if (choice == 3) {
            int indx;
            cout << "Enter index: ";
            cin >> indx;
            manager.deletecircle(indx);
        }

    } while (choice != 4);

    return 0;
}
