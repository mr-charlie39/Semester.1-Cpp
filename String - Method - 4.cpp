#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Input a string and check whether it is a palindrome. "<<endl;

    char name[10];
    cout<<"Enter the word : ";
    cin>>name;

    char name1 [10];

    for(int i = 0 ; i < strlen(name) ; i++){
        name1[i] = name[strlen(name) - (i +1)];
    }

    if(strcmp(name , name1) == 0){
        cout<<"It is palindrome."<<endl;
    }else {
        cout<<"It is not palindrome."<<endl;
    }
}