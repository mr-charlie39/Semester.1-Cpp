#include <iostream>
using namespace std;
int main()
{
    cout << "- Declares an integer variable \n- Uses a pointer to modify the value of the variable \n- Displays the value before and after modification " << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;
    int n;

    cout<<"Enter the value : ";
    cin>>n;

    int *ptr = &n;
    cout<<"Before modification: "<<n<<endl;
    *ptr = *ptr + 5;
    cout<<"After modification: "<<n<<endl;
    return 0;
}