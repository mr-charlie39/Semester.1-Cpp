#include<iostream>
using namespace std;

float minintohour(int min){
	
	return min/60.0;
	
}

int main(){
	int min;
	cout<<"Enter the no. : ";
	cin>>min;
	
	float hour = minintohour(min);
	
	cout<<"The hour is : "<<hour<<" hour"<<endl;
	
}