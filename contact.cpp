#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class contact
{
private:
   char name[20];
   char address[50];
   long long p_no;
   
public:
 void enterinfo(){
     cout<<"enter the name: "<<endl;
     cin>>name;
     cout<<"Enter the address: "<<endl;
    cin>>address;
     cout<<"enter the phone number: "<<endl;
     cin>>p_no;
 }
 void display(){
     cout<<"name: "<<name<<endl;
     cout<<"address: "<<address<<endl;
     cout<<"Phone_number: "<<p_no<<endl;
 }
 void AddContact(){  //function to manipulate into file
     char ch;
     ofstream f0; //output file stream when we want to write something into file. 
 f0.open("CM.dat", ios::binary| ios::app); //open file by using object it take two arguments in which mode we want to open this file and data is extension of this file, and binary refer to we want to open file into binary. append means we want to enter new data into already existing data
 
 do {
     enterinfo();
     f0.write(reinterpret_cast<char*>(this),sizeof(*this));//allow user to enter record
     cout<<"Do You want to add another contact ?(y/n)";
     cin>>ch;
 } 
 while (ch=='y');
 cout<<"contact created successfully: ";
 f0.close(); //close writing
 }
 
 void readContact(){  // for reading the contact
    ifstream f1;
    f1.open("CM.dat", ios::binary);
    cout<<"\n\n\t\t\tList of contact:";
 while(!f1.eof())
 {
     if(f1.read(reinterpret_cast<char*>(this),sizeof(*this)))
     {
        display();
     }
 }
 f1.close(); // we will close reading 
}
void searchContact(){  // for searching the contact
    ifstream f2;
    long long phone_num; // we will enter phone_no on whom basis we are going to find info
    cout<<"enter phone no: ";
    cin>>phone_num;
    f2.open("CM.dat", ios::binary);

    while(f2.eof()) {
        if(f2.read(reinterpret_cast<char*>(this),sizeof(*this))){
       if (phone_num == p_no) // if phone number of we enter to search will match with contact we created it will display it
     {
        display();
        return;
     }
                // if not found the following message will be printed
         cout<<"no record found";
    
    
    }
     f2.close();
                 }         
                     }
 void deleteContact(){
     double phone_num;
     int no = 0;
     ofstream f3;
     ifstream f4;

     f4.open("CM.dat", ios::binary);// original file in read mode
     f3.open("Temporary.dat", ios::binary); // temporary file in write mode store all record expect for user seeking to delete it
     cout<<"enter the phone number to be deleted:";
     cin>>phone_num;
     while (f4.eof())
     if(!f4.read(reinterpret_cast<char*>(this), sizeof (this))){
            {
                if(p_no!= phone_num){
                    f4.read(reinterpret_cast<char*>(this), sizeof (this));
             
                }
            else no == 1;
            
            }
     }
            f4.close();
            f3.close();
            remove("CM.dat");
            rename("temporary.dat","CM.dat");
            no == 1 ?
            cout<<"\n\t contact deleted"<<endl:
            cout<<"\n\t contact not found"<<endl;
            }

   }; 

int main(){
    system("cls");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t Welcome to contact Management";
    getch();

    while (1)
    {
        contact mycont;
        int choice;

        system("cls");
        cout<<"\n\t\n\t welcome to main menu"<<endl;
        cout<<"\n\t[1] add new contact"<<endl;
        cout<<"\n\t[2]  list all contacts"<<endl;
        cout<<"\n\t[3]  search for any contact"<<endl;
        cout<<"\n\t[4]  delete a contact"<<endl;
        cout<<"\n\t\n\t[5] exit from contact management system"<<endl;
        cin>> choice;
        switch (choice)
        {
    case 1:
        system("cls");
        mycont.AddContact();
    break;

    case 2:
        system("cls");
        mycont.readContact();
    break;

    case 3:
        system("cls");
        mycont.searchContact();
        break;

    case 4:
        system("cls");
        mycont.deleteContact();
        break;
    
    case 5:
        system("cls");
        cout<<"\n\n\tThanks for using You are exiting now";
        exit(0);
        break;

        default:
            continue;
        }
    int opt;
    cout<<"enter the choice: [1] main menu\t\t[0]exit\n";
    cin>>opt;
    switch (opt)
    {
    case 0:
        system("cls");
        cout<<"\n\n\tThanks for using You are exiting now";
        exit(0);
        break;
        
    
    default:
        continue;
           }
    }
     return 0;
}