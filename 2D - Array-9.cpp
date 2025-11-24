#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 1; j++ ){
			for(int s = 0 ; s < i ; s++){
				cout<<"\t";
			}
			cout<<arr[i][i];
		}
		cout<<endl;
	}
	return 0;
	
}