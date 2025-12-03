#include<iostream>
using namespace std;

double simple_interest(int p , int r , int t){
	
	return (p*r*t)/100.0;
	
}

int main(){
	int p , r, t;
	
	cout<<"Enter the Principle Amount : ";
	cin>>p;
	cout<<"Enter the rate of interest : ";
	cin>>r;
	cout<<"Enter the Time : ";
	cin>>t;
	
	double result = simple_interest(p,r,t);
	
	cout<<"The Simple Interest amount is : "<<result<<endl;
	
}