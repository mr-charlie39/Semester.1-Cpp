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
    cout<<" Write a C++ program using a structure Student with members: \n\t rollNo, \n\t name, \n\t and marks. Input and display data for one student. "<<endl;

    cout << "Enter the Roll no: ";
    cin >> s1.rollno;

    cout << "Enter the Name: ";
    getline(cin, s1.name);

    cout << "Enter the Marks: ";
    cin >> s1.marks;
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
