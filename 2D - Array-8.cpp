#include<iostream>
using namespace std;
int main(){
	
	int arr1[3][3];
	int arr2[3][3];
	int matrix[3][3];
	
	cout<<"<----- Array:1 ----->"<<endl;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cin>>arr1[i][j];
		}
	}
	
	cout<<"<----- Array:2 ----->"<<endl;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cin>>arr2[i][j];
		}
	}
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			matrix[i][j] = arr1[i][j]*arr2[i][j];
		}
	}
	
	cout<<"\t<----- Matrix: ----->"<<endl;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cout<<"\t"<<arr1[i][j]<<" * "<<arr2[i][j]<<" = "<<matrix[i][j];
		}
		cout<<endl;
	}
	return 0;
}