#include<iostream>
using namespace std;
#include<string>

string posneg(int n){
	if(n>0){
		return "Positive";
	}else if(n<0){
		return "Negative";
	}else{
		return "Zero";
	}
}

int main(){
	int n ;
	cout<<"Enter a no.: ";
	cin>>n;
	
	string msg = posneg(n);
	
	cout<<"The no. is : "<<msg<<endl;
}