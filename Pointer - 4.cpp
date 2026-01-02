#include<iostream>
using namespace std;
int main(){
	cout<<"- Declares two integer variables \n - Uses pointers to calculate and display: \n\t o Sum. \n\t o Difference. \n\t o Product. "<<endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
    
	int a,b;
	
	cout<<"Enter the first value: ";
	cin>>a;
	cout<<"Enter the second value: ";
	cin>>b;
	
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	cout<<"Sum is : "<<*ptr1 + *ptr2<<endl;
	cout<<"Difference is : "<<*ptr1 - *ptr2<<endl;
	cout<<"Product is : "<<*ptr1 * *ptr2<<endl;
	
	return 0;
}