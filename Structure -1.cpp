#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct student {
    int rollno;
    string name;
    float marks;
};

int main() {
    student s1;

    cout << "Enter the Roll no: ";
    cin >> s1.rollno;

    // Clear input buffer completely
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter the Name: ";
    getline(cin, s1.name);

    cout << "Enter the Marks: ";
    cin >> s1.marks;

    cout << "\nDisplaying the student information:\n";
    cout << "Roll No : " << s1.rollno << endl;
    cout << "Name    : " << s1.name << endl;
    cout << "Marks   : " << s1.marks << endl;

    return 0;
}
