#include<iostream>
using namespace std;
int main(){
	int l = 0;
	int r = 0 , c = 0 , n = 0;
	cout<<"Enter the size of row: ";
	cin>>r;
	cout<<"Enter the size of column: ";
	cin>>c;
	
	int arr[r][c];
	
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Enter a no. to search: ";
	cin>>n;
	for(int i = 0 ; i < r ; i++){
		for(int  j = 0 ; j < 3 ; j++){
			if(arr[i][j] == n){
				cout<<"Found!!!"<<endl;
				cout<<"Position of Row: "<<i<<endl;
				cout<<"Position of column: "<<j<<endl;
				l++;
			}
		}
	}
	if(l == 0){
		cout<<"Not Found!!!"<<endl;
	}
}
