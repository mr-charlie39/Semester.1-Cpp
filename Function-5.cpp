#include<iostream>
using namespace std;

string alpha(char n){
	if ((n >= 'a' && n <= 'z' )|| (n >= 'A' && n <= 'Z')){
		return "Alphabet";
	}else{
		return "Not_Alphabet";
	}
}

int main(){
	char a;
	cout<<"Enter the character : ";
	cin>>a;
	
	string msg = alpha(a);
	
	cout<<msg<<endl;
	
}