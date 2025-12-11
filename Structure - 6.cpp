#include<iostream>
using namespace std;

struct student{
	
	int total;
	double percentage;
	char grade;
	
};

char gra(double n){
	if(n >= 80.0){
		return 'A';
	}else if(n >= 70.0){
		return 'B';
	}else if(n >= 60.0){
		return 'C';
	}else if(n >= 50.0){
		return 'D';
	}else if(n >= 40.0){
		return 'E';
	}else {
		return 'F';
	}
}

int main (){
	cout<<"Q - 6 -- Define a structure Student with 5 subject marks and calculate:  \n-> Total \n-> Percentage  \n-> Grade"<<endl; 
	student p;
	int marks = 0 ;
	for(int i = 0 ; i < 5 ; i++){
	cout<<"Enter the marks : ";
	cin>>marks;
	p.total += marks; 
}

    p.percentage = (p.total / 500.0)*100.0 ;
    cout<<"The Percentage is : "<<p.percentage<<endl;
    
    p.grade = gra(p.percentage);
    
    cout<<"The Grade is : "<<p.grade<<endl;
}