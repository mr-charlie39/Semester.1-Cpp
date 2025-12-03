#include<iostream>
using namespace std;

int largest(int a, int b, int c){
	
	if(a>b){
		if(a>c){
			return a;
		}else{
			return c;
		}
	}else{
		if(b>c){
			return b;
		}else{
			return c;
		}
	}
	
}

int main(){
	
	int a , b , c;
	
	cout<<"Enter a first no. : ";
	cin>>a;
	cout<<"Enter the second no. : ";
	cin>>b;
	cout<<"enter the third no. : ";
	cin>>c;
	
	int result = largest(a,b,c);
	
	cout<<result<<" is a Largest no."<<endl;
	
	}