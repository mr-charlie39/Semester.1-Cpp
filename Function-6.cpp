#include<iostream>
using namespace std;

int sum_of_num(int n){
	int sum = 0 ;
	for (int i = 0 ; i <= n ; i++){
		sum += i;
	}
	return sum;
	
}

int main(){
	int n;
	cout<<"Enter the last no. of Summation: ";
	cin>>n;
	
	int result = sum_of_num(n);
	
	cout<<"The sum of n no. is : "<<result<<endl;
	
}