#include<iostream>

using namespace std;

int main()
{
	int a, b;
	char opt;
	cout << "Enter the first no. : ";
	cin >> a;

	cout << "Enter the second no. : ";
	cin >> b;

	cout << "Enter the operator (+, -, *, /): ";
	cin >> opt ;

	if (opt =='+'){

		cout << "Sum = " << a+b;
	}
	else if(opt == '-' ){

		cout << "Difference = " << a-b;
	}
	else if(opt == '*' ){

		cout << "Multiplication = " << a*b;
	}

	else if(opt == '/' ){

		cout << "Division = " << (double)a/(double)b;
	}
	else {
		cout << "Default";
	}

	return 0;
}