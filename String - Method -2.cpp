#include<iostream>
#include<cstring>
#include<limits>
using namespace std;

int main(){
    cout<<"Write a program to: \n\t Input two strings \n\t Compare them \n\t Display which one is longer"<<endl;

    char str1[20] , str2[20];

    cout<<"Enter first string : ";
    cin.getline(str1 , 20);
    
    cout<<"Enter second string : ";
    cin.getline(str2 , 20);

    if(strcmp(str1 , str2) == 0){
        cout<<"Both are equal : "<<endl;
    }else{
        if(strlen(str1) > strlen(str2)){
            cout<<"String "<<str1<<" is Greater : "<<endl;
        }else{
            cout<<"String "<<str2<<" is Greater : "<<endl;
        }
    }

}