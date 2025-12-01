#include<iostream>
using namespace std;
void square(int n){
	cout<<"<------ Suare ------>"<<endl;
	int square;
	square = n*n;
	cout<<"The square is : "<<square<<endl;
}

void area(int n){
	cout<<"<------ Area of Circle: ------>"<<endl;
	int area;
	area = 3.1416*n*n;
	cout<<"The area is : "<<area<<endl;
}

void max(int w , int x , int y){
	cout<<"<------ Maximum of 3 no.: ------>"<<endl;
	cout<<"The maximun of x , y , z :"<<endl;
	if(w>x){
		if(x>y){
			cout<<w<<" is greater:"<<endl;
		}
		else{
			cout<<x<<" is greater:"<<endl;
		}
	}else {
		if(x>y){
			cout<<x<<" is greater:"<<endl;
		}else {
			cout<<y<<" is greater:"<<endl;
		}
	}
}

void min(int a , int b , int c){
	cout<<"<------ Minimum of 3 no.: ------>"<<endl;
	cout<<"The Minimum of x , y , z :"<<endl;
	if(a<b){
		if(a<c){
			cout<<a<<" is Lesser:"<<endl;
		}
		else{
			cout<<b<<"is Lesser:"<<endl;
		}
	}else {
		if(b<c){
			cout<<b<<" is Lesser:"<<endl;
		}else {
			cout<<c<<" is Lesser:"<<endl;
		}
	}
}

void circum(int x){
	cout<<"<------ Circumference: ------>"<<endl;
	int circumf;
	circumf = 2*3.1416*x;
	cout<<"The Circumference is: "<<circumf<<endl;
}

int  main(int n, int x , int y , int w, int a, int b , int c ){
	int choice;
	cout<<"Which one you want:"<<endl;
	cout<<"1 for Square"<<endl;
	cout<<"2 for Area"<<endl;
	cout<<"3 for Maximum of 3:"<<endl;
	cout<<"4 for Minimum of 3:"<<endl;
	cout<<"5 for Circumference"<<endl;
	cin>>choice;
	if(choice == 1){
		cout<<"Enetr radius";
		cin>>n;
		square(n);
	}
	else if(choice == 2){
		cout<<"Enter radius:";
		cin>>n;
		area(n);
	}
	else if(choice == 3){
		cout<<"Enter 1 no.";
		cin>>w;
		cout<<"Enter 2 no.";
		cin>>x;
		cout<<"Enter 3 no.";
		cin>>y;
		max(w , x , y);
	}
	else if(choice == 4){
		cout<<"Enter 1 no.";
		cin>>a;
		cout<<"Enter 2 no.";
		cin>>b;
		cout<<"Enter 3 no.";
		cin>>c;
		min(a,b,c);
	}
	else if(choice == 5){
		cout<<"Enter no.";
		cin>>x;
		circum(x);
	}
}