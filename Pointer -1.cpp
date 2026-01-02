#include<iostream>
using namespace std;

int main(){
    cout<<"- Declares an integer variable \n- Declares a pointer to that variable \n- Displays: \n\to The value of the variable \n\to The address of the variable \n\to The value using the pointer "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    int n ;
    cout<<"Enter the value: ";
    cin>>n;
    int *ptr = &n;
    cout<<"The value of the variable: "<<n<<endl;
    cout<<"The address of the variable in the pointer: "<<ptr<<endl;
    cout<<"The vaue stored in the pointer is : "<<*ptr<<endl;
    return 0;
}