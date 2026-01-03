#include<iostream>
#include <string>
using namespace std;

struct employe{
        int id;
        string name;
        double salary;
    };

int main(){
    cout<<"Create a structure Employee with members: \n\tid, name, salary. \nInput and display data of 3 employees using array of structures. "<<endl;

    employe e[3];
    cout<<"For input :"<<endl;

    for(int i = 0; i < 3 ; i++){
        cout<<"Enter the "<<i+1 << " Employee ID : ";
        cin>>e[i].id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter the "<<i+1<<" Employee Name : ";
        getline(cin , e[i].name);
        cout<<"Enter the "<<i+1<<" Employee Salary : ";
        cin>>e[i].salary;
        cout<<endl;
    }

    cout<<"\nFor Displaying : "<<endl;
    for (int i = 0 ; i < 3 ; i++){
        cout<<"Id of "<<i+1 <<" employee is : "<<e[i].id<<endl;
        cout<<"Name of "<<i+1 << " employee is : "<<e[i].name<<endl;
        cout<<"Salary of "<<i+1<<" employee is :"<<e[i].salary<<endl;
    }

    return 0;
    
}