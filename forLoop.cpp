#include <iostream>

using namespace std;

int main(){
	int size;
 	cout << "Enter the size of Array = ";
 	cin >> size;

	int array[size];

	for (int i = 0; i < size; i++){

		cout << "Enter " << i+1 << " element = ";
		cin >> array[i];
	}

	cout << "Element  of Array = { ";
	for (int i = 0; i < size; i++){

		cout <<" "<< array[i]  <<", " ;
	
	}

	cout << " }" <<endl;
	return 0;
}