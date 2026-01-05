#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    cout<<"Input a string and: \n Convert all characters to uppercase"<<endl;
    char name[20];
    cout<<"Enter your name : ";
    cin.getline(name , 20);

    for(int i = 0 ; i < strlen(name) ; i++){
        name[i] = toupper(name[i]);
    }

    cout<<"In upper-case form name : "<<name<<endl;
}