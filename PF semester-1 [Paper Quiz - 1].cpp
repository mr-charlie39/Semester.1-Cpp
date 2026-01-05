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
    cout<<"--- Employee Salary Management System ---"<<endl;
    cout<<"\nWrite a C++ program to manage employee salary records.\nRequirements\nDefine a structure Employee containing:\n\tEmployee ID\n\tBasic Salary\n\tAllowance\n\tDeduction\n\tNet Salary\nStore data for 5 employees\nWrite a function to calculate:\n\tNet Salary = Basic + Allowance - Deduction\nUse a pointer to update net salary\nDisplay salary status:\n\t\"High Income\" if net salary ≥ 50000\n\t\"Medium Income\" if 30000–49999\n\t\"Low Income\" otherwise"<<endl;
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