#include<iostream>
using namespace std;

double area(int r){
	
	return 3.1416*r*r;
}

int main(){
	int a;
	cout<<"Enter Radius: ";
	cin>>a;
	
	double result = area(a);
	
	cout<<"The area is : "<<result<<endl;
}