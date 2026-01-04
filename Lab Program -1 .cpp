#include<iostream>
using namespace std;
struct student {
	int id;
	float fee;
	double paid;
	double remaining;
};

void calculate(student s[]){
	for(int i = 0 ; i < 5 ; i++){
		cout<<"Enter the "<<i+1<<" paid amount : ";
		cin>>s[i].paid;
		s[i].remaining = s[i].fee - s[i].paid;
	}
	
	for(int i = 0 ; i < 5 ;i++){
		cout<<"For "<<i+1<<" Student status : ";
		if(s[i].remaining == 0){
			cout<<"Cleared : "<<endl;
		}else if(s[i].remaining > 0){
			cout<<"Pending : "<<endl;
		}else {
			cout<<"Please take your remaining amount : "<<endl;
		}
	}
}

int main(){
	student s[5];
	
	for(int i = 0 ; i < 5 ; i++){
		cout<<"Enter the ID of "<<i+1<<" Student : ";
		cin>>s[i].id;
		
		cout<<"Enter the Fee of "<<i+1<<" Student : ";
		cin>>s[i].fee;
	}
	
	calculate(s);
	
	return 0;
}