#include <iostream>
#include <string>
using namespace std;

class problem {
public:
    virtual void solve() = 0;
    virtual ~problem() {}
};

class plusminus : public problem {
public:
    plusminus() { cout << "plusminus function initialized via constructor" << endl; }
    void solve() override {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0)
            cout << "positive number" << endl;
        else if (num < 0)
            cout << "negative number" << endl;
        else
            cout << "number is Zero" << endl;
    }
    ~plusminus() {
        cout << "Program to find positive/negative done! Destructor cleaning..." << endl;
    }
};

class Greatnum : public problem {
public:
    Greatnum() { cout << "Greatnum initialized via constructor" << endl; }
    void solve() override {
        int a, b, c;
        cout << "Please enter 3 numbers: ";
        cin >> a >> b >> c;
        int large = a;
        if (large < b) large = b;
        if (large < c) large = c;
        cout << "Greatest number is " << large << endl;
    }
    ~Greatnum() { cout << "Greatnum finished. Destructor cleaning" << endl; }
};

class ASCII : public problem {
public:
    ASCII() { cout << "ASCII program initialized via constructor" << endl; }
    void solve() override {
        char a;
        cout << "Please enter a character: ";
        cin >> a;
        cout << "ASCII number for '" << a << "' is " << int(a) << endl;
    }
    ~ASCII() { cout << "ASCII problem finished. Destructor cleaning" << endl; }
};

class vowelcheck : public problem {
public:
    vowelcheck() { cout << "Now initializing the vowel function" << endl; }
    void solve() override {
        cin.ignore();
        string word;
        cout << "Enter a word: ";
        getline(cin, word);
        int vowel = 0, consonant = 0;
        for (char ch : word) {
            if (isalpha(ch)) {
                ch = tolower(ch);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    vowel++;
                else
                    consonant++;
            }
        }
        cout << "Number of vowels: " << vowel << endl;
        cout << "Number of consonants: " << consonant << endl;
    }
    ~vowelcheck() { cout << "Vowelcheck finished. Destructor cleaning" << endl; }
};

class stringlength : public problem {
public:
    stringlength() { cout << "Stringlength initialized" << endl; }
    void solve() override {
        cin.ignore();
        string word;
        cout << "Enter a word: ";
        getline(cin, word);
        int total = 0;
        for (char ch : word) total++;
        cout << "Length of word (without str(len) function): " << total << endl;
    }
    ~stringlength() { cout << "Stringlength finished. Destructor cleaning" << endl; }
};

class toggle : public problem {
public:
    toggle() { cout << "Toggle problem initialized" << endl; }
    void solve() override {
        cin.ignore();
        string word;
        cout << "Enter a word to toggle: ";
        getline(cin, word);
        for (char &ch : word) {
            if (islower(ch)) ch = toupper(ch);
            else if (isupper(ch)) ch = tolower(ch);
        }
        cout << "Toggled string: " << word << endl;
    }
    ~toggle() { cout << "Toggle finished. Destructor cleaning" << endl; }
};

int main() {
    problem* prob = nullptr;
    int choice;

    do {
        cout << "\n--- Homework Problem Menu ---\n";
        cout << "1. Check Positive/Negative\n";
        cout << "2. Greatest of three numbers\n";
        cout << "3. ASCII value of character\n";
        cout << "4. Vowel/Consonant count\n";
        cout << "5. String length without length()\n";
        cout << "6. Toggle characters in string\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: prob = new plusminus(); break;
            case 2: prob = new Greatnum(); break;
            case 3: prob = new ASCII(); break;
            case 4: prob = new vowelcheck(); break;
            case 5: prob = new stringlength(); break;
            case 6: prob = new toggle(); break;
            case 0: cout << "Thanks for using my program exit" << endl; break;
            default: cout << "Invalid choice!" << endl; continue;
        }

        if (choice != 0) {
            prob->solve();
            delete prob;
        }

    } while (choice != 0);

    return 0;
}
