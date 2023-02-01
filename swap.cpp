#include<iostream>

using namespace std;

int swap(double num1, double num2);

int main(){
	 double num1, num2;
	cout << "Enter first number = ";
	cin >> num1;


	cout << "Enter second number = ";
	cin >> num2;

	cout << "\nBefore swaping\n" << "First number = " << num1 << "\n" << "Second number = " <<num2 << endl;


	swap(num1, num2);
	
	return 0;
}
int swap(double num1, double num2){

	num1 = (num1 + num2)-(num2 = num1);

	cout << "\nAfter swaping\n" << "First number = " << num1 << "\n" << "Second number = " <<num2 << endl;

	return 0;
}