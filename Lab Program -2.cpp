#include<iostream>
using namespace std;

struct bill{
	int meter_no;
	long unit;
	float rate;
	double amount;
};

void sur(double *ptr , int i){
	if(*ptr > 2000){
		*ptr += (15.0 / 100.0) * (*ptr);
	}
	
	cout<<"Amount of "<<i+1<<" Consumer is : "<<*ptr<<endl;
    cout<<endl;
}

void calculate(bill c[]){
    cout<<"----- Electricity Bill Calculation -----"<<endl;
	for(int i = 0 ; i < 3 ; i++){
	cout<<"Enter rate of unit for "<<i+1<<" Customer : ";
	cin>>c[i].rate;
	
	c[i].amount = c[i].rate * c[i].unit;
    
    double temp = c[i].amount;
	sur(&temp , i);
}
}

int main(){
	bill c[3];
	
	for(int i = 0 ; i < 3 ; i++){
		cout<<"Enter the "<<i+1<<" Consumer Meter_no : ";
		cin>>c[i].meter_no;
		
		cout<<"Enter the "<<i+1<<" Consumer Meter units : ";
		cin>>c[i].unit;
	}
	
	calculate(c);
	
	return 0 ;
}