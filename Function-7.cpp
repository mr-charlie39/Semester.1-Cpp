#include<iostream>
using namespace std;

int reverse(int n){
	int rev  = 0 , digit = 0;
	while(n != 0){
	
	digit = n%10;
	rev = rev * 10 + digit; 
    n = n / 10;
}
return rev;
}

int main(){
	
	int n ;
	cout<<"Enter a no. : ";
	cin>>n;
	int result = reverse(n);
	
	cout<<"The reverse no. is : "<<result<<endl;
}