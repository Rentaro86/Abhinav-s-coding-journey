#include<iostream>
#include<vector>
#include<limits>
using namespace std;

class student {
private:
    int marks;
public:
    student(int marks): marks(marks) {}
    char getGrade() const {
        if (marks >= 90 && marks <= 100) {
            return 'O';
        }
        else if (marks >= 80 && marks < 90) {
            return 'A';
        }
        else if (marks >= 70 && marks < 80) {
            return 'B';
        }
        else {
            return 'F';
        }
    }
    int getMarks() const { return marks; }
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
    vector<student> students;
    int marks, choice;
    cout << "Welcome to Grading system " << endl;
    do {
        cout << "Press 1 to Enter marks for grading" << endl;
        cout << "Press 0 to exit" << endl;
        valid(choice);
        switch(choice) {
            case 1:
                cout << "Enter marks" << endl;
                valid(marks);
                students.emplace_back(marks);
                cout << "Grade: " << students.back().getGrade() << endl;
                break;
            case 0:
                cout << "Exiting"<<endl;
                break;

        }
    }while(choice != 0);

    return 0;
}
