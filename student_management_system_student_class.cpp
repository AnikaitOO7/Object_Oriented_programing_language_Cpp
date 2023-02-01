/*  C++ program to Display Student Details using constructor and destructor */

#include<iostream>
using namespace std;

class student
{
                private:
                    char name[20],add[20];
                        int roll,pin;

                public:
                    student ();//Constructor
                    ~student();//Destructor
                        void read();
                        void display();
};

student :: student()
{
        cout<<"\nThis is Student Details constructor called..........."<<endl;
}

void student :: read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
        cout<<"\nEnter the student address :: ";
        cin>>add;
        cout<<"\nEnter the pincode :: ";
        cin>>zip;
}

void student :: display()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
        cout<<"\nAddress is :: "<<add<<endl;
        cout<<"\nZipcode is :: "<<pin;
}

student :: ~student()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}


int main()
{
        student s;
    s.read ();
    s.display ();

    return 0;
}
