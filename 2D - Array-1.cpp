#include<iostream>
#include<string>
using namespace std;
int main(){
	int arr[5][4];
	string flavour[4] = {"BBQ","fajita","Tikka","Crown-crust"};
	string size[5] = {"Small","Medium","Large","x-Lareg","Family"};
	
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0; j < 4 ; j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0 ; i < 4; i++){
		cout<<"\t"<<flavour[i];
	}
	cout<<endl;
	for(int i = 0 ; i < 5; i++){
		cout<<size[i];
		for(int j = 0; j < 4 ; j++){
			cout<<" "<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}