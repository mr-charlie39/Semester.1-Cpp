#include<iostream>
using namespace std;

struct library{
    int id;
    int b_id;
    int days_late;
    double fine;
};

void calculate_fine(library l[] , int *ptr , int index){
    for(int i = 1 ;i <= *ptr ; i++){
        if(i <= 7){
            l[index].fine += 5 * 1;
        }else {
            l[index].fine += 10 * 1;
        }
    }

}

int main(){
    cout<<"Library Fine Calculation"<<endl;
    cout<<"Requirements\n•	Define a structure Library containing:\n\to	Student ID\n\to	Book ID\n\to	Days Late\n\to	Fine Amount\n•	Store data for 4 students\n•	Write a function using pointer to calculate fine:\n\to	5 per day for first 7 days\n\to	10 per day after 7 days\n•	Display fine status:\n\to	\"No Fine\" if days = 0\n\to	\"Fine Due\" otherwise\n"<<endl;
    library l[5];

    cout<<"Input Details:"<<endl;
    cout<<"---------------\n"<<endl;
    for(int i =0 ; i < 5 ;i++){
       cout<<"Enter the ID of Student "<<i+1<<" : ";
       cin>>l[i].id; 
       cout<<"Enter the Book ID of Student "<<i+1<<" : ";
       cin>>l[i].b_id;
       cout<<"Enter the Days Late of Student "<<i+1<<" : ";
       cin>>l[i].days_late;

         l[i].fine = 0;
       calculate_fine(l , &l[i].days_late , i);
       cout<<endl;
    }
    cout<<"Fine Status:"<<endl;
    cout<<"--------------\n"<<endl;

    for(int i = 0 ; i < 5 ; i++){
        cout<<"Student ID: "<<l[i].id<<endl;
        cout<<"Book ID: "<<l[i].b_id<<endl;
        cout<<"Days Late: "<<l[i].days_late<<endl;
        if(l[i].days_late == 0){
            cout<<"No Fine"<<endl;
        }else{
            cout<<"Fine Due: "<<l[i].fine<<" Rs."<<endl;
        }
        cout<<endl;
    }
    return 0;
}