#include <iostream>

using namespace std;

int exponent(double base, double power);

int main(){

	double base, power;

	cout << "Enter the base = ";
	cin >> base;
	cout<< "\n" << endl;

	cout << "Enter the power = ";
	cin >> power;
	cout<< "\n" << endl;

	cout << "Result = " << exponent(base, power) << endl;
	
	
	return 0;
}

int exponent(double base, double power){
	int result = 1;
	for(int i = 0; i < power; i++){
		result = result * base;
	}
	return result;
}