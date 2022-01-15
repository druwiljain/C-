#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;
#define maxlength 10

class node
{
	public:
		int no_elements;
		int arr[maxlength];
		node*next;
};

class unrolled_list
{
	node* first; //pointer nodes
	node*last;
	public:
	unrolled_list(); //constructor
	void insert_node();
	void display_list();
	
};

unrolled_list::unrolled_list() 
{
	first=NULL;
	last=NULL;
}

void unrolled_list::insert_node()
{
	system("cls");
	node*nd=new node; //  creates new node in empty list
	
	if(nd=NULL)
	{
		cout<<"Memory is not sufficient:\n";
		return;
	}
	else
	{
		cout<<"Enter the no. of marks to be inserted in node : ";
		cin>>nd->no_elements;
		
		cout<<"\nEnter the marks of students: ";
		for(int i=0;i<nd->no_elements;i++)
		cin>>nd->arr[i];
		
		if(first==NULL)
		{
			first=nd;
			last=first;
			last->next=NULL;
		}
		else
		{
			last->next=nd;
			nd->next=NULL;
			last=nd;
		}
		
	}
}
void unrolled_list::display_list()
{
	system("cls");
	int i=1;
	if(first=NULL)
	{
		cout<<"The list is empty:\n"<<endl;
		getch();
		return ;
	}
	node*nd=first;
	while(nd!=NULL)
	{
		cout<<"marks are"<<i<<":"<<endl;
		for(int j=0;j<nd->no_elements;j++)
		cout<<nd->arr[j]<<" ";		
		cout<<"\n\n";
		i++;
		nd=nd->next;
	}
	getch();	
}	

int main()
{
	unrolled_list a;
	int ch,choice=1;
	
	while(choice)
	{
		system("cls");
		
		cout<<"1.INSERT\n";
		cout<<"2.DISPLAY\n";
		cout<<"3.EXIT\n";
		cout<<"enter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1: a.insert_node();
			        break;
			case 2:a.display_list();
			        break;
			case 3: choice=0;
				
		}
	}
	
return 0;
}
