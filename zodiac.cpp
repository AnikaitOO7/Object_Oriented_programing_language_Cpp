#include<iostream>

using namespace std;

int main(){

	string mon;

	int num;

	cout << "Enter your month = ";
	getline(cin, mon);

	cout << "Enter your date = ";
	cin >> num;

	if(mon == 'March' || mon == 'April'){
		if(  19 =>num<= 21 ){
			cout << "Aries is your zodiac sign " << endl;
		}
	}

	if(mon == 'April' && mon == 'May'){
		if(  num == 20  ){
			cout << "Taurus is your zodiac sign " << endl;
		}
	}

	
	return 0;
}