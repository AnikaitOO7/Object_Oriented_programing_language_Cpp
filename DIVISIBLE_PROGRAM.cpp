#include<iostream>

using namespace std;

int main(){

	int int1, num1, num2;

	cout<< "Enter the number = ";
	cin>>int1;

	cout<< "Enter the 1st number to divide = ";
	cin>>num1;

	cout<< "Enter the 2nd number to divide = ";
	cin>>num2;

	if( int1 % num1 == 0 && int1 % num2 == 0 ){
		cout << int1 << " Divisible by " << num1 <<" and " << num2 <<endl;
	}

	else{
		cout<<int1 << " Not Divisible by " << num1 <<" and " << num2 <<endl;
	}
	
	if( int1 % num1 == 0 || int1 % num2 == 0 ){
		cout <<int1 << " Divisible by ";
		if(int1 % num1 == 0 ){
			cout<< num1;
		}
		else{
			cout<<num2;
		}
	}

	else{
		cout <<int1<< " Not Divisible by " << num1 <<" either " << num2 <<endl;
	}
	return 0;
}
