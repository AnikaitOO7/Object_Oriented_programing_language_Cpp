#include<iostream>

using namespace std;

inline int cube(double &num1, double &num2){

	return num1 = (num1 + num2)-(num2 = num1);
}

int main(){

	 double num1, num2;
	cout << "Enter first number = ";
	cin >> num1;


	cout << "Enter second number = ";
	cin >> num2;

	cout << "\nBefore swaping\n" << "First number = " << num1 << "\n" << "Second number = " <<num2 << endl;


	cube(num1, num2);
	cout << "\nAfter swaping\n" << "First number = " << num1 << "\n" << "Second number = " <<num2 << endl;

	cube(num1, num2);
	cout << "\nAfter swaping\n" << "First number = " << num1 << "\n" << "Second number = " <<num2 << endl;

	cube(num1, num2);
	cout << "\nAfter swaping\n" << "First number = " << num1 << "\n" << "Second number = " <<num2 << endl;

	return 0;
}