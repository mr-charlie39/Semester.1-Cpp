#include<iostream>
using namespace std; 

double percentage(int marks[] , int size){
	int total = 0 , total_m = 1;
	
	for(int i = 0 ; i < size ; i++){
		total += marks[i];
	}
	total_m = 100*size;
	
	return (total/total_m)*100;
	
}

int main(){
	int l;
	cout<<"Enter the size of Array : ";
	cin>>l;
	
	int marks[l];
	
	for(int i = 0 ; i < l ; i++){
		cout<<"Enter the marks of "<<i+1<<" Subject: ";
		cin>>marks[i];
	}
	
	
	double result = percentage(marks,l);
	
	cout<<"The percentage is : "<<result<<endl;
	
}