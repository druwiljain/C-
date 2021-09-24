#include <iostream>
#include<string>
using namespace std;
int i;
int pos;
int size;
class Sanghvis_Electronics
{
private:
  string customer_name;
  int customer_age;
  long long int customer_mobile_no;
  string product;
  string customer_email;
  string customer_address;
  
public:
  void read_the_data ()
  {
    cout << "\nENTER THE NAME: ";
    cin>>customer_name;
    cout<< "ENTER THE MOBILE NUMBER: ";
    cin >> customer_mobile_no;
	cout<< "ENTER THE AGE: ";
    cin>> customer_age;
    cout<< "ENTER THE PRODUCT NAME: ";
    cin >> product;
    cout << "ENTER THE EMAIL ID: ";
    cin >> customer_email;
    cout << "ENTER THE ADDRESS: ";
    cin >> customer_address;
  }

  void display_the_data ()
  {
    cout << "\n\nNAME: " << customer_name << endl;
    cout << "MOBILE NUMBER: " << customer_mobile_no << endl;
    cout << "AGE: " << customer_age << endl;
	cout << "PRODUCT: " << product << endl;
    cout << "EMAIL ID: " << customer_email << endl;
    cout << "ADDRESS: " << customer_address << endl;
  }
  
  void insert_item();
  void delete_item();
  void update();
  
};

void Sanghvis_Electronics :: insert_item()
{
  read_the_data();
}

void Sanghvis_Electronics :: delete_item()
{
     customer_name =" ";
     customer_mobile_no =0;
     customer_age =0;
     product =" ";
     customer_email=" ";
     customer_address = " ";

}

void Sanghvis_Electronics :: update()
{
  cout << "\nENTER THE NEW NAME: ";
    cin>> customer_name;
    cout<< "ENTER THE NEW MOBILE NUMBER: ";
    cin >> customer_mobile_no;
    cout<< "ENTER THE NEW AGE: ";
    cin>> customer_age;
	cout<< "ENTER THE PRODUCT NAME: ";
    cin >> product;
    cout << "ENTER THE NEW EMAIL ID: ";
    cin >> customer_email;
    cout << "ENTER THE NEW  ADDRESS: ";
    cin >> customer_address;
}

int main ()
{
	cout<<"-------Welcome to Sanghvi's Electronics-------";
  int choice;
  Sanghvis_Electronics obj[5];
  cout<< "\n\nENTER THE NUMBER OF CUSTOMER DETAILS YOU WANT TO ADD: ";
  cin >>size;
  cout << "ENTER "<<size<<" CUSTOMERS DETAILS"<<endl;
  for ( i = 0; i <size; i++)
     obj[i].read_the_data();
   
  cout<<"\n\n-----------DISPLAY THE DETAILS-----------";
  for ( i = 0; i <size; i++)
     obj[i].display_the_data(); 
    
  cout<<"\n1.INSERT DETAILS"<<endl<<"2.DELETE DETAILS "<<endl<<"3.UPDATE DETAILS"<<endl<<"0.EXIT";
  cout<<"\nENTER YOUR CHOICE: ";
  cin>>choice;
  while(choice!=0)
  {
      if(choice==1)
      {
      	cout<<"\nENTER THE POSTION YOU WANT TO INSERT DATA: ";
		cin>>pos;
		for ( i= pos; i <size+1; i++)
		  obj[i]=obj[i-1];
		obj[pos-1].insert_item();  
		cout<<"\n\n-------DISPLAY DETAILS AFTER INSERTING NEW DATA-------\n";
        for ( i = 0; i <size+1; i++)
          obj[i].display_the_data(); 
          
      }
       
      else if(choice==2)
      {
        cout<<"\nENTER THE POSTION YOU WANT TO DELETE THE DATA: ";
      	cin>>pos;
		obj[pos-1].delete_item();
		for ( i= pos-1; i <size-1; i++)
		  obj[i]=obj[i+1];
		cout<<"\n\n-------DISPLAY DETAILS AFTER DELETING DATA-------\n";
        for ( i = 0; i <size-1; i++)
          obj[i].display_the_data(); 
          
	  }
      
      else if(choice==3)
      {
        cout<<"\n ENTER THE POSTION YOU WANT TO UPDATE DATA: ";
		cin>>pos;
		obj[pos-1].update();
		cout<<"\n\n-------DISPLAY DETAILS AFTER UPDATING NEW DATA-------\n";
        for ( i = 0; i <size; i++)
          obj[i].display_the_data();  
      }
   cout<<"\n1.INSERT DETAILS"<<endl<<"2.DELETE DETAILS "<<endl<<"3.UPDATE DETAILS"<<endl<<"0.EXIT";
   cout<<"\nENTER YOUR CHOICE: ";
   cin>>choice;             
  } 
  return 0;
}
