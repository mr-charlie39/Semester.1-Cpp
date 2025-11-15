#include<iostream>
using namespace std;
void neg_pos_10() {
	cout<<"\n <============================================ Positive/Negative ============================================>"<<endl;
	int p = 0, n = 0;
	int num[10];

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}

	for(int i = 0 ; i < 10 ; i++) {

		if(num[i] > 0) {
			p++;
		} else if(num[i] < 0) {
			n++;
		} else {
			cout<<"Zero is: "<<num[i]<<endl;
		}
	}

	cout<<"Total Positive no.: "<<p<<endl;
	cout<<"Total Negative no.: "<<n<<endl;
}
void even_odd_10() {
	cout<<"\n <============================================ Even/Odd ============================================>"<<endl;
	int e = 0, o = 0;
	int num[10];

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}

	for(int i = 0 ; i < 10 ; i++) {

		if(num[i]%2 == 0) {
			e++;
		} else {
			o++;
		}
	}
	cout<<"Total Even no.: "<<e<<endl;
	cout<<"Total Odd no.: "<<o<<endl;
}
void larg_small_5() {
	cout<<"\n <============================================ Largest/Smallest ============================================>"<<endl;

	int num[5];

	for(int i = 0 ; i < 5 ; i++ ) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}

	int larg = num [0];
	int small = num [0];
	for(int i = 0 ; i < 5 ; i++) {
		if(num[i] > larg) {
			larg = num[i];
		}
		if(num [i] < small) {
			small = num[i];
		}
	}
	cout<<"The largest no. is : "<<larg<<endl;
	cout<<"The Smallest no. is : "<<small<<endl;
}
void count_gret_10() {
	cout<<"\n <========================================= No. Greater than 50: =========================================>"<<endl;

	int gret = 0;
	int num[10];

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(num[i] > 50) {
			gret++;
		}
	}
	cout<<"Total no. Greater then 50 is : "<<gret<<endl;

}

void search_position_10() {
	cout<<"\n <========================================= Search a digit and its Position: =========================================>"<<endl;

	int num[10];
	int p = 11;
	int sear = 0;

	for(int i = 0 ; i< 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}
	cout<<"Enter a Different no.  for search : ";
	cin>>sear;
	for(int i = 0 ; i < 10 ; i++) {
		if(num[i] == sear) {
			p = i;
		}
	}
	if(p < 10) {
		cout<<"Index of searched no. is : "<<p<<endl;
	} else {
		cout<<"Not Found!!!"<<endl;
	}
}
void reverse_5() {
	cout<<"\n <============================================ Reverse displaty: ============================================>"<<endl;

	int num[5];

	for(int i = 0 ; i < 5 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}
	for(int i = 5 ; i > 0 ; i--) {
		cout<<i<<" no. is"<<num[i-1]<<endl;
	}
}
void marks_10() {
	cout<<"\n <============================================ Pass/Fail ============================================>"<<endl;

	int marks[10];
	int pass = 0, fail = 0;

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter marks of "<<i + 1<<" Student: ";
		cin>>marks[i];
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(marks[i] >= 50) {
			pass++;
		} else {
			fail++;
		}
	}
	cout<<"Total Passed students are : "<<pass<<endl;
	cout<<"Total Fail students are : "<<fail<<endl;
}

void replace_negative_10() {
	cout<<"\n <============================================ Replace negative no. :  ============================================>"<<endl;

	int num[10];

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(num[i] < 0) {
			num[i] = 0;
		}
	}
	cout<<"\n\t\t<-------No. after replacing: -------->"<<endl;
	for(int i = 0 ; i < 10 ; i++) {

		cout<<i+1<<" no. is : "<<num[i]<<endl;
	}
}
void sum_odd_10() {
	cout<<"\n <============================================ Sum of Odd no. :  ============================================>"<<endl;

	int num[10];
	int sum = 0;

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
		if(num[i] % 2 != 0) {
			sum += num[i];
		}
	}
	cout<<"Sum of Odd no. is : "<<sum<<endl;
}
void equal_index_10() {
	cout<<"\n <============================================ Equivalance Index: ============================================>"<<endl;

	int num1[5];
	int num2[5];
	int equal = 0;

	cout<<"\nFirst Array: "<<endl;
	for(int i = 0 ; i < 5 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num1[i];
	}
	cout<<"\nSecond Array: "<<endl;
	for(int i = 0 ; i < 5 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num2[i];
	}
	for(int i = 0 ; i < 5 ; i++) {
		for(int j = 0 ; j < 5 ; j++) {
			if(num1[i] == num2[j]) {
				equal++;
			}
		}
	}
	cout<<"Total no. of equal elements are : "<<equal<<endl;
}

void second_largest_10() {
	cout<<"\n <============================================ Second Largest no. :  ============================================>"<<endl;

	int num[10];

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}
	int larg = num[0];

	for(int i = 0 ; i < 10 ; i++) {
		if(num[i] > larg) {
			larg = num[i];
		}

	}
	int second_larg = num[0];
	for(int i = 0 ; i < 10 ; i++) {
		if(num[i]> second_larg && num[i] != larg) {
			second_larg = num[i];
		}
	}
	cout<<"Largest no. is : "<<larg<<endl;
	cout<<"Second Largest no. is : "<<second_larg<<endl;
}
void count_temp_7() {
	cout<<"\n <============================================ Temperature of 7 Days : ============================================>"<<endl;

	int temp[7];
	int above = 0,below = 0 ;

	for(int i = 0 ; i < 7 ; i++) {
		cout<<"Enter the temperature of "<<i+1<<" day : ";
		cin>>temp[i];
	}
	for(int i = 0 ; i < 7 ; i++) {
		if(temp[i] > 30) {
			above++;
		} else {
			below++;
		}
	}

	cout<<"No. of days on which Temperature is greater then 30 is : "<<above<<endl;
	cout<<"No. of days on which Temperature is below or equal ot 30 is : "<<below<<endl;

}
void replace_even_10() {
	cout<<" <============================================ Replace even no. :  ============================================>"<<endl;

	int num[10];

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter a no. "<<i+1<<" : ";
		cin>>num[i];
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(num[i] % 2 == 0) {
			num[i] = 1;
		}
	}
	cout<<"\n\t\t<--------No. after replacing:--------> "<<endl;
	for(int i = 0 ; i < 10 ; i++) {

		cout<<i+1<<" no. is : "<<num[i]<<endl;
	}
}
void grade_5() {
	cout<<"\n <============================================ Grades of 5 Students :  ============================================>"<<endl;

	int marks[5];

	for(int i = 0 ; i < 5 ; i++ ) {
		cout<<"Enter marks of "<<i+1<<" Student : ";
		cin>>marks[i];
	}

	for(int i = 0 ; i < 5 ; i++) {
		if(marks[i] >= 80) {
			cout<<"Grade of "<<i+1<<" student is : "<<"\" A \""<<endl;
		} else if(marks[i] >= 60) {
			cout<<"Grade of "<<i+1<<" student is : "<<"\" B \""<<endl;
		} else if(marks[i] >= 40) {
			cout<<"Grade of "<<i+1<<" student is : "<<"\" C \""<<endl;

		} else {
			cout<<"Grade of "<<i+1<<" Fail: "<<endl;
		}
	}
}

void avg_pos_10() {
	cout<<"\n <============================================ Average of Positive no. :  ============================================>"<<endl;

	int num[10];
	int sum = 0;
	float avg = 0, total_avg = 0;

	for(int i = 0 ; i < 10 ; i++) {
		cout<<"Enter "<<i+1<<" no. ";
		cin>>num[i];
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(num[i] > 0) {
			sum += num[i];
			avg++;
		}
	}
	total_avg = sum/avg;
	cout<<"Average of Positive no. is : "<<float(total_avg)<<endl;
}

int main() {
	int m = 0;
	int y = 0 ;
	cout<<"\n<---------- Which calculation you want to perform : ---------->\n"<<endl;


	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Press 1 - Q-1. Write a C++ program to input 10 integers in an array and count how many numbers are positive and how many are negative.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 2 - Q-2. Write a program to input 10 numbers into an array. Using a for loop and if–else, count how many are even and how many are odd.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 3 - Q-3. Write a C++ program to input 5 integers in an array and find the largest and smallest elements using a for loop and if–else.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 4 - Q-4. Input 10 numbers in an array and use a for loop with if–else to count how many numbers are greater than 50.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 5 - Q-5. Write a program that asks the user to enter 10 numbers in an array and then input a number to search. If found, display its position; otherwise, display 'Not Found'.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 6 - Q-6. Input 5 numbers into an array and display them in reverse order using a for loop.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 7 - Q-7. Input marks of 10 students in an array. Using if–else, count how many students passed (marks >= 50) and how many failed.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 8 - Q-8. Write a program to input 10 numbers into an array. If any number is negative, replace it with 0 using a for loop and if–else.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 9 - Q-9. Write a program to input 10 numbers in an array and calculate the sum of only odd numbers using if–else.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 10 - Q-10. Input two arrays of 5 elements each. Use a for loop and if–else to check how many elements are equal at the same index.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 11 - Q-11. Input 10 integers into an array and find the second largest number using loops and if–else.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 12 - Q-12. Store temperatures of 7 days in an array. Use if–else to count how many days had temperature above 30°C and how many had below or equal to 30°C.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 13 - Q-13. Input 10 numbers in an array. Replace every even number with 1 and display the updated array.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 14 - Q-14. Input marks of 5 students in an array. Use if–else to display grades as per rule: Marks >= 80 --> Grade A, Marks >= 60 --> Grade B, Marks >= 40 --> Grade C, Else --> Fail.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"Press 15 - Q-15. Input 10 numbers in an array. Using if–else, calculate and display the average of only positive numbers.\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	cout<<"\nPress...... ";
	cin>>m;

	if(m == 1) {

		neg_pos_10();

	} else if(m == 2) {

		even_odd_10();

	} else if(m == 3) {

		larg_small_5();

	} else if(m == 4) {

		count_gret_10();

	} else if(m == 5) {

		search_position_10();

	} else if(m == 6) {

		reverse_5();

	} else if(m == 7) {

		marks_10();

	} else if(m == 8) {

		replace_negative_10();

	} else if(m == 9) {

		sum_odd_10();

	} else if(m == 10) {

		equal_index_10();

	} else if(m == 11) {

		second_largest_10();

	} else if(m == 12) {

		count_temp_7();

	} else if(m == 13) {

		replace_even_10();

	} else if(m == 14) {

		grade_5();

	} else if(m == 15) {

		avg_pos_10();

	} else {

		cout<<"Invalid!!!"<<endl;
	}
	cout<<"========================================== "<<endl;
	cout<<"Do you want to perform another calculation:\nPress 1 - for Yes. \n Press 2- for No.\n Enter .....";
	cin>>y;
	if(y == 1) {
		main();
	} else {
		return 0;
	}
}