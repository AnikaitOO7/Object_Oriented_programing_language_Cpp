#include<iostream>

using namespace std;

int main(){

	int vote;

	cout<< "Enter the age = ";
	cin>>vote;

	if(vote >= 18 && vote <= 45 ){
		cout << "Alegeble for voting" <<endl;
	}

	else{
		cout << "Not alegeble for voting"<<endl;
	}
	
	return 0;
}