#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Input a sentence (single word allowed) and: \n\t Reverse each character \n\t Display original and reversed strings "<<endl;

    char name[10];
    char reverse[10];
    cout<<"Enter a word : ";
    cin>>name;

    for(int i = 0 ;i < strlen(name) ; i++){
        reverse[i] = name[strlen(name) - (i + 1)];
    }

    cout<<"Original word : "<<name<<endl;
    cout<<"Reversed word : "<<reverse<<endl;

    return 0;

}
