#include<iostream>
using namespace std;
int main(){
	int num[5];
	
	for(int i = 0 ; i < 5 ; i++){
	cout<<"Enter "<<i+1<<" no.: ";
	cin>>num[i];	
	}
	
	for(int i = 0 ; i < 5 ; i++){
		for(int j = i+1 ; j < 5 ; j++ ){
			if(num[i] < num[j]){
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout<<"Dessending :"<<endl;
	for(int i = 0 ; i < 5 ; i++){
		cout<<num[i]<<endl;
	}

}