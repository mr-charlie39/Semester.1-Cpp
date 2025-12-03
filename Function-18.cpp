#include<iostream>
using namespace std;

double bill(int amount, int tax_am){
	
	int tax = (amount*tax_am)/100;
	
	return amount+tax;
	
}

int main(){
	
	int amount ,  tax_am;
	cout<<"Enter the amount : ";
	cin>>amount;
	cout<<"Enter the tax rate : ";
	cin>>tax_am;
	
	double result = bill(amount,tax_am);
	
	cout<<"The total bill is : "<<result<<endl;
}