#include<iostream>
using namespace std;

struct employee{
    int id;
    double salary;
    double allownance;;
    double deduction;
    double net_salary;
};

void calculate(employee e[] , double *ptr , int i){
    *ptr = e[i].salary + e[i].allownance - e[i].deduction;
    cout<<"The Net Salary of Employee "<<i+1<<" is : "<<*ptr<<endl;
}

int main(){
    employee e[5];

    cout<<"Input employee details: "<<endl;

    for(int i = 0 ; i  < 5 ; i++){
        cout<<"ID of "<<i+1<<" Empoloyee : ";
        cin>>e[i].id;

        cout<<"Basic Salary of "<<i+1<<" Employee : ";
        cin>>e[i].salary;

        cout<<"Allowance of "<<i+1<<" Employee : ";
        cin>>e[i].allownance;

        cout<<"Deduction of "<<i+1<<" Employee : ";
        cin>>e[i].deduction;

        // double temp = &e[i].net_salary;

        calculate(e , &e[i].net_salary ,i);
        cout<<endl;

    }

    cout<<"Information of Employee: "<<endl;

    for(int i =0 ; i < 5 ; i++){
        cout<<"Id of "<<i+1<<" Employee is : "<<e[i].id<<endl;
        cout<<"Net Salary of "<<i+1<<" Employee is : "<<e[i].net_salary<<endl;
        cout<<"Salary Status: ";
        if(e[i].net_salary >= 50000){
            cout<<"\"High Income: \" "<<endl;
            cout<<endl;
        }else if(e[i].net_salary >= 30000 && e[i].net_salary < 50000){
            cout<<"\"Medium Income: \" "<<endl;
            cout<<endl;
        }else{
            cout<<"\"Low Income: \" "<<endl;
            cout<<endl;
        }
    }
    return 0;
}