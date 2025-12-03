#include<iostream>
using namespace std;

int abs(int n){
	if(n >= 0){
		return n;
	}else{
		return (n*-1);
	}
}

int main(){
	int a;
	
	cout<<"Enter a no.: ";
	cin>>a;
	
	int result = abs(a);
	cout<<"The absolute value of "<<a<<" is "<<result<<endl;
}