#include<iostream>

using namespace std;

int main(){

	int int1, count = 2, num = 1;

	cout << "Enter the number = ";

	cin >> int1;

	while(count < int1)  
    {  
        if(int1%count == 0)  //Is a prime number logic if num equal to zero.
        {  
            num = 0;  
            break;  
        }  
        count++;  
    }  
    //If num equal to zero then it is not a prime or else. 
    if(num == 0 )
        cout << int1 << " is not prime number\n" << endl;
    else
        cout << int1 << " is prime number\n" << endl ; 
  
	
	return 0;
}
