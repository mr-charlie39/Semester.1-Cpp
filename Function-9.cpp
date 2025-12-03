#include<iostream>
using namespace std;

bool div_5_11(int n){
	
	if(n%5==0 && n%11==0){
		return true;
	}else{
		return false;
	}
	
}

int main(){
	int n;
	cout<<"Enter a no. : ";
	cin>>n;
	
	int a = div_5_11(n);
	
	if(a == 1){
		cout<<"Divisible by 5 and 11:"<<endl;
	}else{
		cout<<"Not Divisible by 5 and 11:"<<endl;
	}
	
	
}