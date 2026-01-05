#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Input a string and count: \n\t Total characters \n\t Number of vowels"<<endl;
    int vowels = 0 ; 
    char name[20];
    cout<<"Enter your name : ";
    cin.getline(name , 20);

    for(int i = 0 ; i < strlen(name) ; i++){
        if(name[i] == 'A' || name[i] == 'a' ||name[i] == 'E' || name[i] == 'e' || name[i] == 'I' || name[i] == 'i' || name[i] == 'O' || name[i] == 'o' || name[i] == 'U' || name[i] == 'u' ){
            vowels++;
     }

    }

    cout<<"Total vowels are : "<<vowels<<endl;
    cout<<"Total characters are : "<<strlen(name)<<endl;
}