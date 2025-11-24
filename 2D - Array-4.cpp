#include<iostream>
#include<string>
using namespace std;
int main(){
	int r = 0 , c = 0;
	cout<<"Enetr the size of Rows: ";
	cin>>r;
	cout<<"Enter the size of Column: ";
	cin>>c;
	int arr[r][c];
	string items[r];
	string size[c];
	cout<<"\t<----- Items(R): ----->"<<endl;
	for(int i = 0 ; i < r; i++){
	cin>>items[i];	
	}
	cout<<"\t<----- Size(C): ----->"<<endl;
	for(int i = 0 ; i < c; i++){
	cin>>size[i];	
	}
	cout<<"\t<----- Amount: ----->"<<endl;
	for(int i = 0; i < r ; i++){
	for(int j = 0; j < c ; j++){
	cin>>arr[i][j];
	}	
	}
	for(int i = 0; i < r ; i++){
		cout<<"\t"<<items[i];
	}
	cout<<endl;
	for(int i = 0; i < r; i++){
		cout<<size[i];
		for(int j = 0; j < c ; j++){
		cout<<"\t"<<arr[i][j];	
		}
		cout<<endl;
	}
	return 0;
}