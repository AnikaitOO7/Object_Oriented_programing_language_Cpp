#include<iostream>

using namespace std;

int main(){

	int size, pos, ele;
	cout << "Enter the size = ";
	cin >> size;


	int a[size];

	for (int i=0;i < size; i++){

		cout << "Enter " << i+1 <<" element = ";
		cin >> a[i]; 
	}
	cout << "Befor insertion " <<endl ;

	for (int i=0;i < size; i++){

		cout << "Element at  " << i+1 <<" index = " << a[i] <<endl;
	}

	cout << "Enter the position = ";
	cin >> pos;

	cout << "Enter the element you want to insert at " << pos <<" =";
	cin >> ele;


	if (pos < 0 || pos > size){

		size++;

		a[pos] = ele;

		cout << "After insertion " <<endl ;
		for (int i=0;i < size; i++){

		cout << "Element at  " << i+1 <<" index = " << a[i] <<endl;
	}
	}

	else {

		cout << "Invalid position" << endl;
	}
	return 0;
}