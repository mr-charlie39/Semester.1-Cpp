#include<iostream>
using namespace std;
int a , b ;
char m = 'y';
int a1 = 0;
void check_b();
void menu(){
	
	cout<<"Press -1 for Addition:"<<endl;
	cout<<"Press -2 for Substraction:"<<endl;
	cout<<"Press -3 for Multiplication:"<<endl;
	cout<<"Press -4 for Division:"<<endl;
}

long Addition(int a, int b){
	return a+b;
}
long Substraction(int a, int b){
	return a-b;
}
long Multiplication(int a, int b){
	return a*b;
}
double Division(int a, int b){
	return (double)a/b;
}

void input(){
	do{
	if(a1 == 0){
	cout<<"Enter the 1st no. : ";
	cin>>a;
}
	cout<<"Enter the 2nd no. : ";
	cin>>b;
	int check = b;
	check_b();
}while(m == 'y');

}

void check_b(){
	if(b == false){
		a1 = 1;
		input();
	}else{
		m = 'n';
	}
}

int main(){

	int choice;
	input();
	menu();
	cout<<"Enter the choice : ";
	cin>>choice;
	
	if(choice == 1){
		 cout<<"The result is : "<<Addition(a,b)<<endl;
	}else if(choice == 2){
		 cout<<"The result is : "<<Substraction(a,b)<<endl;
	}else if(choice == 3){
		 cout<<"The result is : "<<Multiplication(a,b)<<endl;
	}else if(choice == 4){
		 cout<<"The result is : "<<Division(a,b)<<endl;
	}
	
}
