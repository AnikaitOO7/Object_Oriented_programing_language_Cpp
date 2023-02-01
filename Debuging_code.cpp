#include<iostream>
using namespace std;
int factorial(int);
int main()
{
 int n,a;
 cout<<"Enter the value of a ";
 cin>>a;
 cout<<factorial(a);
return 0;  
}
int factorial(int a){
    int result = 1;
    for (int n = 1; n <= a; n++)
    {
        result = result*n;
    }
    return result; 
}