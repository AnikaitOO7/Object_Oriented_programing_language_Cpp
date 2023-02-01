#include<iostream>

using namespace std;

int main(){

	int size;
	cout << "Enter the size = ";
	cin >> size;

	int a[size];

	for (int i=0;i < size; i++){

		cout << "Enter " << i+1 <<" element = ";
		cin >> a[i]; 
	}
	
	for (int i=0;i < size; i++){

		cout << "Element at  " << i+1 <<" index = " << a[i] <<endl;
	}
	return 0;
}