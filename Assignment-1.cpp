#include <iostream>
using namespace std;
int main()
{
    cout << "This C++ program allows the user to buy fruits and vegetables, enter their quantities, and then calculates:\n\t1-Individual quantity and price of each item\n\t2-Total quantity and price of all fruits\n\t3-Total quantity and price of all vegetables\n\t4-Final total bill of all purchased items\nThe user can keep selecting items until they choose to exit." << endl;
    cout << "<-------------------- Welcome to Grocery Shop -------------------->" << endl;
    int po = 0, to = 0, mang = 0, org = 0, total_bill = 0;
    int oni = 0, strb = 0, qn1 = 0;
    int qn2 = 0, qn3 = 0, qn4 = 0, qn5 = 0, qn6 = 0;
    int qn = 0, n1 = 0, n2 = 0;
    int sumofquantity = 0, sumoffruits = 0, sumofveg = 0;
    char l1 = 'y', msg, m_l1 = 'y';
    char nl1, nl2;
    while (l1 = 'y')
    {

        cout << "Do you want to buy:\n 1- Press [F] for Fruits: \n 2- Press [V] for Vegetables: \n 3- Press [E] Exit:" << endl;
        cout << "Press: ";
        cin >> msg;
        if (msg == 'f' || msg == 'F')
        {
            cout << "<-------------------- FRUITS: -------------------->" << endl;
            while (m_l1 = 'y')
            {
                cout << "Press 1- Orange (15 kg):" << endl;
                cout << "Press 2- Mango (20 kg):" << endl;
                cout << "Press 3- Strawberry (100 kg):" << endl;
                cout << "Press 4- Exit." << endl;
                cout << "Enter Answer: ";
                cin >> n1;
                if (n1 == 1)
                {
                    cout << "Enter Quantity: ";
                    cin >> qn;
                    qn1 += qn;
                    org = org + (qn1 * 15);
                    cout << "Price if Orange: " << org << endl;
                    cout << "Total Quantity of Orange: " << qn1 << endl;
                }
                else if (n1 == 2)
                {
                    cout << "Enter Quantity: ";
                    cin >> qn;
                    qn2 += qn;
                    mang = mang + (qn2 * 20);
                    cout << "Price if Mango: " << mang << endl;
                    cout << "Total Quantity of Mango: " << qn2 << endl;
                }
                else if (n1 == 3)
                {
                    cout << "Enter Quantity: ";
                    cin >> qn;
                    qn3 += qn;
                    strb = strb + (qn3 * 100);
                    cout << "Price if Strawberry: " << strb << endl;
                    cout << "Total Quantity of Strawberry: " << qn3 << endl;
                }
                else if (n1 == 4)
                {
                    cout << "Exit: " << endl;
                    break;
                }
                cout << "Do you wan to buy more Fruits: (y/n)" << endl;
                cin >> nl1;
                if (nl1 != 'y')
                {
                    break;
                }
                sumofquantity = qn1 + qn2 + qn3;
                sumoffruits = org + mang + strb;
            }
            cout << "------- Fruits: -------\t ------- Quantity: -------\t ------- Total Price: -------" << endl;
            cout << "\t1- Orange:\t\t" << qn1 << "\t\t\t" << org << endl;
            cout << "\t2- Mango:\t\t" << qn2 << "\t\t\t" << mang << endl;
            cout << "\t3- Strawberry:\t\t" << qn3 << "\t\t\t" << strb << endl;
            cout << "Total Quantity of Fruits: " << sumofquantity << endl;
            cout << "Total price of Fruits: " << sumoffruits << endl;
        }

        else if (msg == 'v' || msg == 'V')
        {
            cout << "<----------------------------- VEGETABLES: ----------------------------->" << endl;
            while (m_l1 = 'y')
            {
                cout << "Press 1- Potatoes: (15 kg):" << endl;
                cout << "Press 2- Tomatoes: (20 kg):" << endl;
                cout << "Press 3- Onions: (100 kg):" << endl;
                cout << "Press 4- Exit." << endl;
                cout << "Enter Answer: ";
                cin >> n2;
                if (n2 == 1)
                {
                    cout << "Enter Quantity: ";
                    cin >> qn;
                    qn4 += qn;
                    po = po + (qn4 * 15);
                    cout << "Price if Potatoes: " << po << endl;
                    cout << "Total Quantity of Potatoes: " << qn4 << endl;
                }
                else if (n2 == 2)
                {
                    cout << "Enter Quantity: ";
                    cin >> qn;
                    qn5 += qn;
                    to = to + (qn5 * 20);
                    cout << "Price if Mango: " << to << endl;
                    cout << "Total Quantity of Tomatoes: " << qn5 << endl;
                }
                else if (n2 == 3)
                {
                    cout << "Enter Quantity: ";
                    cin >> qn;
                    qn6 += qn;
                    oni = oni + (qn6 * 100);
                    cout << "Price if Strawberry: " << oni << endl;
                    cout << "Total Quantity of Onions: " << qn6 << endl;
                }
                else if (n1 == 4)
                {
                    cout << "Exit:" << endl;
                    break;
                }
                cout << "Do you wan to buy more Vegetables: (y/n)" << endl;
                cin >> nl1;
                if (nl1 != 'y')
                {
                    break;
                }
            }
            sumofquantity = qn4 + qn5 + qn6;
            sumofveg = po + to + oni;
            cout << "------- Vegetables: -------\t ------- Quantity: -------\t ------- Total Price: -------" << endl;
            cout << "\t1- Potatoes:\t\t" << qn4 << "\t\t\t" << po << endl;
            cout << "\t2- Tomatoes:\t\t" << qn5 << "\t\t\t" << to << endl;
            cout << "\t3- Strawberry:\t\t" << qn6 << "\t\t\t" << oni << endl;
            cout << "Total Quantity of Vegetables: " << sumofquantity << endl;
            cout << "Total price of Vegetables: " << sumofveg << endl;
        }
        else if (msg == 'E' || msg == 'e')
        {
            break;
            l1 = 'n';
        }
    }
    total_bill = oni + mang + po + to + strb + org;
    cout << "<----------------------- Main Table: ----------------------->" << endl;
    cout << "\t1- Orange:\t\t" << qn1 << "\t\t\t" << org << endl;
    cout << "\t2- Mango:\t\t" << qn2 << "\t\t\t" << mang << endl;
    cout << "\t3- Strawberry:\t\t" << qn3 << "\t\t\t" << strb << endl;
    cout << "\t4- Potatoes:\t\t" << qn4 << "\t\t\t" << po << endl;
    cout << "\t5- Tomatoes:\t\t" << qn5 << "\t\t\t" << to << endl;
    cout << "\t6- Strawberry:\t\t" << qn6 << "\t\t\t" << oni << endl;
    cout << "Total Bill of things: " << total_bill << endl;
}