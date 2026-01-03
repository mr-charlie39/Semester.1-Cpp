#include<iostream>
#include<string>
#include<limits>

using namespace std;

struct patient{
    string id , name;
    float temp;
};

int main(){
    int n;
    cout<<"Enter the number of patients : ";
    cin>>n;

    patient* p = new patient[n];

    for(int i =0 ; i < n ; i++){
        cout<<"Enter the ID of "<<i+1<<" patient : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin , p[i].id);
        cout<<"Enter the Name of "<<i+1<<" patient : ";
        getline(cin , p[i].name);
        cout<<"Enter the Temperature of "<<i+1<<" patient : ";
        cin>>p[i].temp;
    }

    cout<<"\n\nTemperature Report of Patients : \n";
    cout<<"------------------------------------"<<endl;
    for(int i = 0 ; i < n ; i++){
        if(p[i].temp > 38.0){
            cout<<"Patient ID : "<<p[i].id<<endl;
            cout<<"Patient Name : "<<p[i].name<<endl;
            cout<<"Patient Temperature : "<<p[i].temp<<endl;
            cout<<"------------------------------------"<<endl;
        }
    }
    return 0;
}
