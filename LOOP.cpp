#include<iostream>

using namespace std;

int main(){

	int var, sum = 0, count = 0;
	cout << "Enter the number = ";
	cin >> var;
	while (count <= var){

		sum += count ;
		count++;	
	}
	cout << "Sum = " << sum;
	return 0;
}