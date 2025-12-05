#include<iostream>
using namespace std;

int C[3][3];
void add(int A[3][3], int B[3][3], int C[3][3]) {
	
	cout<<"<========== Summation of Matrics: ==========>"<<endl;
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cout<<"\t"<<A[i][j]<<" + "<<B[i][j];
			C[i][j] = A[i][j]+B[i][j];
		}
		cout<<endl;
	}
	
	cout<<"<=============== Summation: ===============>"<<endl;
	
	for(int i  = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){	
			cout<<"\t"<<C[i][j];
		}
		cout<<endl;
	}
}

int largestInMatrix(int C[3][3]){
	int largest = C[0][0];
	cout<<"The Largest no. in Matrix: "<<endl;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){
			if(C[i][j] > largest){
				largest = C[i][j];
			}
		}
	}
	return largest;
} 


int main(){
	int A[3][3] , B[3][3] ;
	int arr[9];
	int s = 0;
	
	cout<<"<=============== Input First Array: ===============>"<<endl;
	
	for(int i  = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){
			cout<<"Enter in "<<i<<j<<" Position : ";
			cin>>A[i][j];
		}
	}
	
	cout<<"<=============== Input Second Array: ===============>"<<endl;
	
	for(int i  = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){
			cout<<"Enter in "<<i<<j<<" Position : ";
			cin>>B[i][j];
		}
	}
	
	cout<<"<=============== Ouput First Array: ===============>"<<endl;
	
	for(int i  = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){	
			cout<<"\t"<<A[i][j];
		}
		cout<<endl;
	}
	
	cout<<"<=============== Ouput Second Array: ===============>"<<endl;
	
	for(int i  = 0 ; i < 3 ; i++){
		for(int j = 0; j < 3 ; j++){	
			cout<<"\t"<<B[i][j];
		}
		cout<<endl;
	}
	
	add(A,B,C); 
	int max = largestInMatrix(C);
	cout<<"The largest no. in matric is : "<<max<<endl;
	
	cout<<"<========== 1-D Array: ==========>"<<endl;;
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			arr[s]=C[i][j];
			s++;
		}
	}
		for(int i = 0 ; i < 9 ; i++){
		cout<<arr[i]<<"\t";
		
	}
	
	
}