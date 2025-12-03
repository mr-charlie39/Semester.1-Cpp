#include<iostream>
using namespace std;

long power(int n , int p){
	int a = n;
	if(p == 0){
		return n*p;
	}else{
		for(int i = 1 ; i < p ; i++){
			a = (a*n);
		}
		return a;
	}
}

int main(){
	int n , p ;
	
	cout<<"Enter the no. : ";
	cin>>n;
	cout<<"Enter the power of a no. : ";
	cin>>p;
	
	long result = power(n,p);
	
	cout<<"The result is : "<<result<<endl;
	
}