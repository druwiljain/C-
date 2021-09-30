//Assignment based on Class, constructor and user defined functions.
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Customer                //Declared class as customer
{
    private:
    	char name[20];        //Data types
    	long long account;
		string branch; 
		string ifsc;
	
	public:
		Customer()            //Use of constructor implemented here 
		{
			branch = "PUNE";
		}
		void getdata();
		void showdata();
};
void Customer :: getdata()   // this getdata will help to take data from user
{
	cout<<"\nEnter the account number: ";
	cin>>account;
	cin.ignore();
	cout<<"Enter the account holder name: ";
	cin.getline(name,20);
//	cout<<"Enter the branch: ";
//	cin>>branch;
	cout<<"Enter the IFSC code: ";
	cin>>ifsc;
};
void Customer :: showdata()  //It will help to display the given data by user
{	
	cout << "\n               Account holder name: "<< name << endl;  
	cout << "               Account Number: " << account << endl; 
	cout << "               Branch: " << branch << endl;
	cout << "               IFSC: " << ifsc << endl; 
	cout << "----------------------------------------------------";
};
int main()
{
	cout<<"***Bank account holder details***"<<endl;   //heading of my program
    Customer custobj[3];  //index value
    int i=0;
    for (i=0;i<2;i++)     //This for loop will take my info. again and again as I want
    {
        custobj[i].getdata();
    }
    cout<<"\n---------------Account holder details---------------"<<endl;
    for (i=0;i<2;i++)     //This for loop will help me to get output of my information that my user is given to it 
    {
        custobj[i].showdata();
    }
    return 0;
};
