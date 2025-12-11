#include<iostream>
using namespace std;

struct  BankAccount{
	
	int accountNumber;
	string holderName ;
	double balance;
	
};

int main(){
	
	cout<<"Q - 7 --  Define a structure BankAccount with:  \n-> accountNumber  \n-> holderName  \n-> balance \nAllow the user to:  \n-> Deposit amount \n-> Withdraw amount \n-> Displayupdated balance"<<endl;
	
	int amount=0,choice = 0;
	int n = 0;
	cout<<"<==== How many accounts you want ====>  ";
	cin>>n;
	
	BankAccount b[n];
	
	for(int i  = 0; i < n ; i++){
		b[i].accountNumber = i+1;
		cout<<"Enter the Holder name : ";
		cin>>b[i].holderName;
		cout<<"Enter the balance : ";
		cin>>b[i].balance;
	}
	
	cout<<"<---------- Deposit: ---------->"<<endl;
	cout<<"Enter the amount to deposit: ";
	cin>>amount;
	cout<<"From which account you want to depoasit: ";
	cin>>choice;
	b[choice-1].balance += amount;
	
	cout<<"<---------- Withdraw: ---------->"<<endl;
	cout<<"Enter the amount to withdraw: ";
	cin>>amount;
	
	cout<<"From which account you want to withdraw: ";
	cin>>choice;
	
	b[choice-1].balance -= amount;
		
	cout<<"<---------- Updated amount: --------->"<<endl;
	cout<<"\t Account no. \t holder name \t balance"<<endl;
	for(int i = 0; i < n ; i++){
		cout<<"\t "<<b[i].accountNumber;
		cout<<"\t\t"<<b[i].holderName;
		cout<<"\t\t"<<b[i].balance;
		
		cout<<endl;
	}
}