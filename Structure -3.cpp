#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct book {
    int id;
    string title;
    double price;
};

int main() {

    book b[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter the " << i + 1 << " book ID: ";
        cin >> b[i].id;

        cout << "Enter the " << i + 1 << " book Title: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, b[i].title);

        cout << "Enter the " << i + 1 << " book Price: ";
        cin >> b[i].price;
    }

    cout << "\nBooks with price greater than 1000:\n";
    cout << "-----------------------------\n";

    for (int i = 0; i < 5; i++) {
        if (b[i].price > 1000) {
            cout << "ID: " << b[i].id << endl;
            cout << "Title: " << b[i].title << endl;
            cout << "Price: " << b[i].price << endl;
            cout << "-----------------------------\n";
        }
    }
    return 0;
}
