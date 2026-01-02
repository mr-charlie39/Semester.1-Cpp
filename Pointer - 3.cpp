#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program that: \n\t- Takes two integer variables \n\t- Uses pointers to swap their values \n\t- Displays values before and after swapping ";
    cout << "\n-----------------------------------------------------------------------------------" << endl;
    int a,b;

    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;

    cout<<"Before swappinig : "<<endl;
    cout<<"First value: "<<a<<endl;
    cout<<"Second value: "<<b<<endl;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int temp = *ptr1;
    *ptr1 = *ptr2 ;
    *ptr2 = temp;

    cout<<"After swapping : "<<endl;
    cout<<"First value is :"<<a<<endl;
    cout<<"Second value is :"<<b<<endl;

    return 0;

}