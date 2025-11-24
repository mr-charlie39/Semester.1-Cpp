#include<iostream>
using namespace std;
int main (){
	int arr[3][3];
	int sum = 0;
	
	
	for(int i = 0; i < 3 ; i++){
		for(int j = 0 ; j < 3; j++){
		cin>>arr[i][j];	
		}
		cout<<endl;
	}
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){
			cout<<"\t"<<arr[i][j];
			sum += arr[i][j];
		}
		cout<<"\t sum is : = "<<sum<<endl;
		sum = 0;
	}
}