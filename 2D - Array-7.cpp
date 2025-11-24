#include<iostream>
using namespace std;
int main(){
	int r = 0, c = 0, even = 0 , odd = 0;
	cout<<"Enter the size of row: ";
	cin>>r;
	cout<<"Enter thr size of column: ";
	cin>>c;
	
	int arr[r][c];
	
	for(int i = 0 ; i < r ; i++){
		for(int j = 0; j < c ; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i = 0 ; i < r ; i++){
		for(int j = 0; j < c ; j++){
			cout<<" "<<arr[i][j];
			if(arr[i][j] % 2 == 0){
				even++;
			}else{
				odd++;
			}
		}
		cout<<endl;
	}
	cout<<"Total Even no. are: "<<even<<endl;
	cout<<"Total Odd no. are: "<<odd<<endl;
	
}