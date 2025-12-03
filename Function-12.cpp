#include<iostream>
#include<string>
using namespace std;

string leap(int year){
	
	if(year%4 == 0){
		return "Leap Year";
	}else {
		return "Not a Leap Year";
	}
	
}

int main(){
	
	int n;
	cout<<"Enter the year: ";
	cin>>n;
	
	string result = leap(n);
	
	cout<<n<<" is a "<<result<<endl;
}