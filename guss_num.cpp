#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int guessNum();
int numtoGuess();

int main(){

	int cho;

	while(1){

		cout << "----------Welcome to guess game----------" <<endl;
		cout << "Enter 1 to start" <<endl;
		cout << "Enter 2 to  exit" <<endl;
		cout << "Enter your choice = ";
		cin >> cho;

		switch(cho){

			case 1 : guessNum();
			break;

			case 2 : exit(0);
			break;

			default : cout <<"\n\n!!!!!!Enter valid no.!!!!!!\n\n";
		}
	}
}

int numtoGuess(){
	srand(time(0));
	int result = rand() % 10;

	//cout << result;

	return result;
}
int guessNum(){
	int num1;
	int maxLim = 3, chanceCount = 0, numToGuess = numtoGuess();
	bool outOFguess = false;


	while(numToGuess != num1 && !outOFguess){

		if(maxLim > chanceCount){
			cout << "Enter your " << chanceCount+1 << " guess = ";
			cin >> num1;

			chanceCount++;
		}
		else{

			outOFguess = true;
		}
	}

	if (outOFguess){

		cout << "\n\n!!!Out of Guess!!!\n\n";

	}
	else {

		cout << "\n\n-------Hey You Won!!!! Congrulations-----\n\n" <<endl;
	}

	return 0;
}

