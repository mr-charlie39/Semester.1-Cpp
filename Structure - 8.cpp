#include<iostream>
#include<string>
#include<limits>
using namespace std;
struct  car{
    string id;
    string model;
    long price;
};

int main(){

    cout<<" Create a structure Car with members: \n\t carID \n\t model \n\t price \nWrite a program to: \n\t Store 5 cars \n\t Display only cars with price above 2 million"<<endl;

    car c[5];

    cout<<"--------"<<endl;
    cout<<"INPUT: |"<<endl;
    cout<<"--------"<<endl;

    for(int i = 0 ; i < 5 ; i++){
        
        cout<<"Enter the "<<i+1<<" Car ID : ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin , c[i].id);
        
        cout<<"Enter the "<<i+1<<" Car Model : ";
        getline(cin , c[i].model);

        cout<<"Enter the "<<i+1<<" Car Price : ";
        cin>>c[i].price;
    }

    cout<<"\nOuput: "<<endl;

    for(int i = 0 ; i < 5 ; i++){
        if(c[i].price > 2000000){
            cout<<"Car ID : "<<c[i].id<<endl;
            cout<<"Car Model : "<<c[i].model<<endl;
            cout<<"Car Price : "<<c[i].price<<endl;
            cout<<"----------------"<<endl;
        }
    }

    return 0;
}