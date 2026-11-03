
#include <iostream>
#include <string>
using namespace std;

class String_Concat {
    string str;

public:
    // Parameterized constructor
    String_Concat(string r = "") {
        str = r;
    }

    // Overloading binary + operator
    String_Concat operator+(const String_Concat &s) {
        return String_Concat(str + s.str);
    }

    // Display function
    void show() {
        cout << str;
    }
};

int main() {
    String_Concat a("hi"), b("bye");

    String_Concat s = a + b;

    cout << "Concatenated String: ";
    s.show();

    return 0;
}
