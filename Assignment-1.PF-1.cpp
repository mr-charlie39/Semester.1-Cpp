#include<iostream>
#include<string>
using namespace std;

int acc[3][2] = {0} , transaction[5]={0} , l = 0 , accountNo , amount;




int deposit(int acc[][2] , int accountNo , int amount){
	cout<<"\nEnter the account No. : ";
	cin>>accountNo;
	cout<<"Enter the amount to deposit : ";
	cin>>amount;
	
	transaction[l]= amount;
	return acc[accountNo-1][1] += amount;
	
	
}

int withdraw(int acc[][2] , int accountNo , int amount){
	cout<<"\nEnter the account No. : ";
	cin>>accountNo;
	cout<<"Enter the amount to Withdraw : ";
	cin>>amount;
	
	if(amount>0 && amount<=acc[accountNo-1][1]){
		transaction[l]=-amount;
		return acc[accountNo-1][1] -= amount;
	}else {
		cout<<"Insifficient Balance!!!"<<endl;
		l = l-1;
	}
	
}


int main(){
	int choice ;
	string acc_name[3] = {"Mobilink","Askari Bank","Habibi Bank"};
	
	cout<<"<=============== Banking System: ===============>"<<endl;
	for(int i  = 0 ; i < 3 ; i++){
			acc[i][0] = i+1;
	}
	cout<<" \t "<<" Account_No:"<<"\t"<<"Amount:"<<endl;
	for(int i  = 0 ; i < 3 ; i++){
		cout<<acc_name[i];
		for(int j = 0 ; j < 2 ; j++){
			cout<<"\t"<<acc[i][j];
		}
		cout<<endl;
	}
	for(l; l < 5 ; l++){
		cout<<"<============== Transaction : "<<l+1 <<" ===============>"<<endl;

	cout<<"\nPress 1 - For Deposit:"<<endl;
	cout<<"Press 2 - For Withdraw: "<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	if(choice == 1){
		deposit(acc,accountNo,amount);
		cout<<"\n \t "<<" Account_No:"<<"\t"<<"Amount:"<<endl;
	for(int i  = 0 ; i < 3 ; i++){
		cout<<acc_name[i];
		for(int j = 0 ; j < 2 ; j++){
			cout<<"\t"<<acc[i][j];
		}
		cout<<endl;
	}
	
	}else if(choice == 2){
		withdraw(acc , accountNo , amount);
		cout<<"\n \t "<<" Account_No:"<<"\t"<<"Amount:"<<endl;
	for(int i  = 0 ; i < 3 ; i++){
		cout<<acc_name[i];
		for(int j = 0 ; j < 2 ; j++){
			cout<<"\t"<<acc[i][j];
		}
		cout<<endl;
	}
	
	}
	
	
	
}


cout<<"<========== The Total transaction: ==========>"<<endl;

cout<<endl;
for(int i = 0 ; i < 5 ; i++){
	cout<<transaction[i]<<" \t ";
}
}