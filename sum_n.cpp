#include<iostream>

using namespace std;
int add (int* array, int size);

int main(){

	int size;
	cout << " Enter how many number are to be added = " ;
	cin >> size;
	cout << "\n";

	int array[size];

	for (int i = 0 ; i < size ; i++){
		cout << "Enter " << i+1 << " number = ";
		cin >> array[i];
	}

	cout << "\nNumber to be added are = ";
	for (int i = 0 ; i < size ; i++){
		cout << array[i] ;
		if(i < size-1){
			for (int i = 0; i < 1 ; i++){
				cout << " + ";
			}
		}
	}


	cout << "\nSum = " << add(array, size) <<endl;
	return 0;
}


int add (int* array, int size){
	int result = 0;
	for(int i=0;i<size;i++){
		result+=array[i];
	}

	
	return result;
}