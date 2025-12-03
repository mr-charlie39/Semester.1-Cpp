#include<iostream>
using namespace std;

void meter_centi(int kilo){
	int meter = 0 , centi_meter = 0 ;
	meter = kilo*1000;
	cout<<"The Meters are : "<<meter<<endl;
	centi_meter = meter*100;
	cout<<"The Centi-meter are : "<<centi_meter<<endl;
}

int main(){
	
	int kilo;
	cout<<"Enter Kilo-meters: ";
	cin>>kilo;
	
	meter_centi(kilo);
}