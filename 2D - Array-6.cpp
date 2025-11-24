#include<iostream>
using namespace std;
int main(){
	int arr[4][4];
	
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			cin>>arr[i][j];
		}
	}
	int max = arr[0][0];
	cout<<"<----- Matrix: ----->"<<endl;
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			cout<<" "<<arr[i][j];
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"The Maximum no. is : "<<max<<endl;
	return 0;
}