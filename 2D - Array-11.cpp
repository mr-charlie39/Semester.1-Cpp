#include<iostream>
#include<string>
using namespace std;
int main(){
	 int arr[7][3];
	 string days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	 string time[3] = {"Morning","Afternoon","Evening"};
	 
	 
	 for(int i = 0; i < 7 ; i++){
	 	for(int j = 0; j < 3 ; j++){
	 		cin>>arr[i][j];
		 }
	 }
	 
	 for(int i = 0 ; i < 3 ; i++){
	 	cout<<" \t "<<time[i];
	 }
	 cout<<endl;
	 
	for(int i = 0; i < 7 ; i++){
		cout<<days[i];
	 	for(int j = 0; j < 3 ; j++){
	 		cout<<" "<<arr[i][j]<<"\t\t";
		 }
		 cout<<endl;
	 }
	 return 0;
}