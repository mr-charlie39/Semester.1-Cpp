#include<iostream>
using namespace std;

struct product {
	int product_id ;
	string name;
	long quantity;
};

int main(){
	
	cout<<"Q -5 --  Create a structure Product:\n-> productID \n-> product Name \n-> Quantity \n Write a program to find the total quantity of all products."<<endl;
	
	long t_quantity = 0;
	int n = 0;
	cout<<"How many product you want: ";
	cin>>n;
	product p[n];
	
	for(int i = 0 ; i < n ; i++){
		cout<<"Enetr the product name : ";
		cin>>p[i].name;
		cout<<"Enter the product Id : ";
		cin>>p[i].product_id;
		cout<<"Enter the quantity of product: ";
		cin>>p[i].quantity;
		
		t_quantity += p[i].quantity;
	}
	
	cout<<"\n<==== Total quantity is : ====> "<<t_quantity<<endl;
	return 0; 
}