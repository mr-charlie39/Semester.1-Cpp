#include<iostream>
#include<string>
#include<limits>

using namespace std;

struct result{
    string rollno , name;
    float marks ;
};

int main(){
    cout<<". Define a structure Result with: \n\t rollNo \n\t name \n\t marks \nStore data of 10 students and display the topper (highest marks)."<<endl;
    result r[10];
    cout<<"Enter the details of 10 students : "<<endl;
    cout<<"----------------------------------"<<endl;

    for(int i = 0 ; i < 10 ; i++){
        cout<<"Enter the Roll No. of student "<<i+1<<" : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin , r[i].rollno);
        cout<<"Enter the Name of student "<<i+1<<" : ";
        getline(cin , r[i].name);
        cout<<"Enter the Marks of student "<<i+1<<" : ";
        cin>>r[i].marks;
        cout<<"----------------------------------"<<endl;
        cout<<endl;
    }

    cout<<"Toppest one : "<<endl;
    float toppest = r[0].marks;
    for(int i = 1 ; i < 10 ; i++){
        if(r[i].marks > toppest){
            toppest = r[i].marks;
            cout<<"Roll No. : "<<r[i].rollno<<" is the toppest student."<<endl;
            cout<<"Name : "<<r[i].name<<endl;
            cout<<"Marks : "<<r[i].marks<<endl;
        }
    }

    return 0;
}
