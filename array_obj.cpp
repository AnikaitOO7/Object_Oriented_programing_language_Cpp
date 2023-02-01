#include<iostream>
#include<conio.h>
using namespace std;

class student
    {
private:
         int rollnumber;
         float marks;

public:
         void accept()
                    {
                       cout<<"enter the rollnumber and marks " <<endl;
                       cin>>rollnumber>>marks;

                    }
        void display()
                    {
                    cout<<"___marks card___";
                    cout<<"rollnumber "<<rollnumber<<endl;
                    cout<<"marks "<<marks<<endl;
                    }
    };
int main()
{
student s[5];
int i;

for(i=0;i<5;i++)
    {
    s[i].accept();
    }
for(i=0;i<5;i++)
    {
    s[i].display();
    }
getch();
return 0;
}