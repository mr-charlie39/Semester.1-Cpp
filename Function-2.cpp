#include<iostream>
using namespace std;

double cube(int cube){
	cout<<"cube of the "<<cube<<" is : ";
	return cube*cube*cube;
}

int main(){
	int n;
	cout<<"Enter a no. : ";
	cin>>n;
	
	int a = cube(n);
	cout<<a<<endl;
	
}
