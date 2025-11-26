#include<iostream>
using namespace std;
int main(){
	
	int arr1[2][2];
	int arr2[2][2];
	int matrix[2][2];
	
	cout<<"<----- Array:1 ----->"<<endl;
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cin>>arr1[i][j];
		}
	}
	
	cout<<"<----- Array:2 ----->"<<endl;
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cin>>arr2[i][j];
		}
	}
	
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			matrix[i][j] = 0;
			for(int s = 0 ; s < 2 ; s++){
				matrix[i][j] += (arr1[i][s]*arr2[s][j]);
			}
		}
	}
	
	cout<<"\t<----- Matrix: ----->"<<endl;
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cout<<"\t"<<matrix[i][j];
		}
		cout<<endl;
	}
	return 0;
}