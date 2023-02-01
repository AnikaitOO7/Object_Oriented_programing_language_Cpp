#include<iostream>

using namespace std;

int main(){

	int var, var1, sum , count = 1 ;
	cout << "Enter the table you no want to print = ";
	cin >> var;

	cout << "Upto where you want to print table = ";
	cin >> var1;

	sum = var*count;
	cout << var << " X " << count <<" = " << sum << endl;
	
	while (count < var1 && count++ ){

		sum = var*count; 

		cout << var << " X " << count <<" = " << sum << endl;
		//count++;	
	}
	//cout << "Sum = " << sum;
	return 0;
}