#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct mobile {
    string model, brand;
    double price;
};

int main() {
    cout << "Define a structure Mobile with members:\n"
         << "\tmodel, brand, price.\n"
         << "Input data of 5 mobiles and display the most expensive mobile.\n\n";

    mobile m[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter the Model of " << i + 1 << " mobile: ";
        getline(cin, m[i].model);

        cout << "Enter the Brand of " << i + 1 << " mobile: ";
        getline(cin, m[i].brand);

        cout << "Enter the Price of " << i + 1 << " mobile: ";
        cin >> m[i].price;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double exp = m[0].price;
    int index = 0;

    for (int i = 1; i < 5; i++) {
        if (m[i].price > exp) {
            exp = m[i].price;
            index = i;
        }
    }

    cout << "\nThe most expensive mobile is:\n";
    cout << "Model: " << m[index].model << endl;
    cout << "Brand: " << m[index].brand << endl;
    cout << "Price: " << m[index].price << endl;

    return 0;
}
