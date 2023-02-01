#include<iostream>
#include<cstring>

using namespace std;

int main(){

	string str;
	int count1=0, count2=0, count3 =0, count4= 0;
	cout << "Enter the character = ";
	getline(cin, str);

	int size = str.length();

	//cout << size;

	char* c = const_cast<char*>(str.c_str());
	cout << "Is character" << c <<endl;
	char char1[size] ;

	strcpy(char1, c);

	//char1 = c;
     

	for(int i = 0 ; char1[i] !='\0' ; i++){

		if( char1[i] == 'a' ||  char1[i] == 'e' ||  char1[i] == 'i' ||  char1[i] == 'o' ||  char1[i] == 'u' || char1[i] == 'A' || char1[i] == 'E' ||  char1[i] == 'I' ||  char1[i] == 'O' ||  char1[i] == 'U'){
			++count1;
		}
		else if(char1[i] >= 'a' && char1[i] <= 'z' ||char1[i] >= 'A' && char1[i] <= 'Z' ){
			++count2;
		}
		else if (char1[i] >= '0' && char1[i] <= '9'){
			++count3;
		}

		else{
			++count4;
		}
	}	

	cout <<"Entered string is = " <<"'"<< str <<"'"<< endl;

	cout <<"Vowels in string is = " <<"'"<< count1 <<"'"<< endl;

	cout <<"Consunants in string is = " <<"'"<< count2 <<"'"<< endl;

	cout <<"Number in string is = " <<"'"<< count3 <<"'"<< endl;

	cout <<"Special character in string is = " <<"'"<< count4 <<"'"<< endl;
	
	return 0;
}