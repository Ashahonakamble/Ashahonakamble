
#include <iostream>
#include <string>
using namespace std;

class String_Concat {
    string str;

public:
    String_Concat(string r = "") {
        str = r;
    }


    String_Concat operator+(const String_Concat &s) {
        return String_Concat(str + s.str);
    }


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
