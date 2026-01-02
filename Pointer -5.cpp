#include <iostream>
using namespace std;
int main()
{
    cout << "- Declares two integer variables \n- Declares two pointers pointing to them \n - Compares the values using pointers and displays: \n\to Which value is greater \n\to Or if both are equal"<<endl;
    cout << "-----------------------------------------------------------------------------------" << endl;

    int a,b;

    cout<<"Enter the first value: ";
    cin>>a;

    cout<<"Enter the second value: ";
    cin>>b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    if(*ptr1 > *ptr2){
        cout<<"First value : "<<*ptr1 <<" is greater than second value: "<<*ptr2<<endl;
    }else if (*ptr1 < *ptr2){
        cout<<"Second value : "<<*ptr2 <<" is greater than first value : "<<*ptr1<<endl;   
    }else {
        cout<<"Both values are equals:"<<*ptr1 << " = "<<*ptr2<<endl;
    }
}