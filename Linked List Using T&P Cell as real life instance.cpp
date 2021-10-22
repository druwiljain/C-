/*Assignment:=Design and develop program for insertion, up-dating, 
searching, sorting, listing and deletion operations using singly linked list 
for placement information system.*/
#include<iostream>//HEADER FILE
using namespace std;
class Placement_info
{
	public:
	int prn,rollno;
	float cgpa;
	string name;
	Placement_info*next;

};

class record
{
	public:
		Placement_info *head;
		int len;
		record()//default constructor
		{
			head=NULL;
			len=0;
		}
		void create();//create the record
		void display();//display the record
		void insert(); //insert new record
		void del(); //delete any record
		void update(); // update any info from record
		void search(); // serach any info from record
		void sort();// sorting
	};
	void record :: create()
	{
		Placement_info *temp ,*p;
		int y;
		char ch;
		do 
		{
			temp=new Placement_info ;
			cout<<"\nEnter PRN Number of Student: ";
			cin>>temp->prn;
		    cout<<"Enter Roll Number of Student: ";
			cin>>temp->rollno;
		    cout<<"Enter  Name  of Student: ";
			cin>>temp->name;
			cout<<"Enter CGPA  of Student: ";
			cin>>temp->cgpa;
			temp->next=NULL;
			len++;
			if(head==NULL)
			head=temp;
			else
			{
				p=head;
				while(p->next !=NULL)
					p=p->next;
					p->next=temp;
			}
			cout<<"\nDo you want to add  more record of students (y)=";
			cin>>ch;
		}
		while(ch=='y');
	}
	void record::display()
	{  Placement_info *p;
		p=head;
	    cout<<" ________________________________________________________________________________________\n";    
		cout<<"       \t\t  **********|Student Record For Placement|*************\t\t    "<<endl;
	    cout<<"|\n\t\t"<<"PRN"<<"\t\t"<<"ROLL NO"<<"\t\t"<<"STUDENT NAME"<<"\t\t"<<"CGPA"<<"\t\t|"<<endl;
		while(p!=NULL)
		{
			cout<<"|\n\t\t"<<p->prn<<"\t"<<p->rollno<<"\t\t"<<p->name<<"\t\t\t"<<p->cgpa<<"\t\t|"<<endl;
			p=p->next;
		}
	    cout<<" ________________________________________________________________________________________\n";
		cout<<"                   ||Total number of record||: "   <<len<<"\n";
		cout<<" ________________________________________________________________________________________\n";
	}
	void record::insert()
	{
		int pos;
		Placement_info *p,*temp;
		temp=new Placement_info  ;
		cout<<"\nEnter new PRN number of student: ";
		cin>>temp->prn;
		cout<<"Enter new roll no of student: ";
		cin>>temp->rollno;
		cout<<"Enter new name of student: ";
		cin>>temp->name;
		cout<<"Enter new CGPA of student: ";
		cin>>temp->cgpa;
		temp->next=NULL;
		cout<<"Enter the Position you want to insert: ";
		cin>>pos;
		if(pos==1) //insert at first position
		{
			temp->next=head;
			head=temp;
			cout<<"Correctly inserted newly record at first \n ";
			p=head;
		}
		else if(pos>len) //insert at last position
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}	
			p->next=temp;
			cout<<"Correctly inserte newly record at last \n";
		} 
		else //insert at middle position
		{
			p=head;
			for(int i=1;i<pos-1;i++)	
			{
				p=p->next;	
			}
			temp->next=p->next;
			p->next=temp;
			cout<<"\n---Correctly inserted newly record at middle---\n";
		}
		len++;	
	}
	void record :: del()
	{
		 Placement_info *curr,*prev;
		 int pos;
		curr=head;
		prev=NULL;
		cout<<"\nEnter the position you want to Delete: ";
	    cin>>pos;
		if(pos==1)
		{
			head=head->next;
			delete curr;
			
		}
		else if(pos==len)
		{
			while(curr->next!= NULL)
			{
		 		prev=curr;
		 		curr=curr->next;
			}
		 	prev->next=NULL;
		 	delete curr;
		}
		else
		{
			for(int i=1;i<pos;i++)	
			{
				prev=curr;
				curr=curr->next;
			}
			prev->next=curr->next;
			delete curr;
		}
		len--;
	}
	void record ::  update()
	{
		Placement_info *p;
		int pos,rollno1,choice,prn1,y;
		string name1;
		float cgpa1;
		cout<<"\nEnter the position you want to Update: ";
	    cin>>pos;
	   	cout<<"\n1.Prn \n2.Roll no \n3.StudentName \n4.CGPA \n ";//any one info you can update from record
	    cout<<"\nEnter the choice you want to update specific record: ";
	    cin>>choice;	
	    switch(choice)
	    {
			case 1:
	    	{
	        	cout<<"\nEnter New PRN to Update: ";
		     	cin>>prn1;	    
		    	p=head;
		    	if(pos==1)
		    	{
		    		p->prn=prn1 ;
		    	
				}
				else if(pos==len)
				{
					p->prn=prn1 ;
				}
				else
				{
					for(int i=1;i<pos;i++)
					{
						p=p->next;
					}
					p->prn=prn1 ;
				}
			}
			break;
	
			case 2:
			{
				cout<<"\nEnter New Roll no you want to Update: ";
	     		cin>>rollno1;
	    	p=head;
		    if(pos==1)
		    {
	    		p->rollno=rollno1 ;	
			}
			else if(pos==len)
			{
				p->rollno=rollno1 ;
			}
			else
			{
				for(int i=1;i<pos;i++)
				{
					p=p->next;
				}
				p->rollno=rollno1 ;
			}
		}
		break;
				
		case 3:
		{
			cout<<"\nEnter New name you want to Update: ";
		    cin>>name1;
	    	p=head;
	    	if(pos==1)
	    	{
	    		p->name=name1;	
			}
			else if(pos==len)
			{
				p->name=name1 ;
			}
			else
			{
				for(int i=1;i<pos;i++)
				{
					p=p->next;
				}
				p->name=name1 ;
			}
		}
		break;
			
		case 4:
		{
			cout<<"\nEnter New CGPA you want to Update: ";
		    cin>>cgpa1;
	    	p=head;
	    	if(pos==1)
		    {
		    	p->cgpa=cgpa1 ;
			}
			else if(pos==len)
			{
				p->cgpa=cgpa1;
			}
			else
			{
				for(int i=1;i<pos;i++)
				{
					p=p->next;
				}
				p->cgpa=cgpa1 ;
			}
		}
		break;
		default:
		cout<<"Wrong Choice"<<endl;				
	}
			
}
void record ::search()
{ 
	Placement_info *p;
	int rollno1,choice,y,prn1,flag=0;
	string name1;
	float cgpa1;
	
    p = head ;
    cout<<"\n1.PRN \n2.Roll no \n3.StudentName \n4.CGPA "<<endl;
	cout<<"Enter the choice to serach specific record: ";
	cin>>choice;
	switch(choice)
	{
	    case 1:
		{
			cout<<"\nEnter the PRN you want to search: ";   
	        cin>> prn1;
	    	while(p->next != NULL)
			{
	    		
	    		if(p->prn == prn1)
				{
	    			flag = 1 ;
	    			break;
				}
				else
				{
					p = p->next ;
				}
			}
			
			if(flag ==1 )
			{
				cout<<"\nGiven information is present  \n";
				cout<<"|Serached PRN NO is: "<<prn1"|"<<endl;
			}
			else
			{
				cout<<"\nGiven information is not present  \n";
			}
		}
		break;
		
		case 2:
		{
			cout<<"\nEnter roll no you want to search: ";   
        	cin>>rollno1;
			while(p->next != NULL)
			{
	    		if(p->rollno == rollno1)
				{
	    			flag = 1 ;
	    			break;
				}
				else
				{
					p = p->next ;
				}
			}
			if(flag ==1 )
			{
				cout<<"\nGiven information is present  \n";
				cout<<"|Serached Roll no: |"<<rollno1<<endl;
			}
			else
			{
				cout<<"\nGiven information is not present  \n";
			}
		}
		break;
			
		case 3:
		{
			cout<<"\nEnter name you want to search: ";   
	        cin>>name1;
	    	while(p->next != NULL)
			{
	    		if(p->name == name1)
				{
	    			flag = 1 ;
	    			break;
				}
				else
				{
					p = p->next ;
				}
			}	
			if(flag ==1 )
			{
				cout<<"\nGiven information is present \n";
				cout<<"|Searched name is: |"<<name1<<endl;
			}
			else
			{
				cout<<"\nGiven information is not present  \n";
			}
		}
		break;
		case 4:
		{
			cout<<"\nEnter the CGPA you want to search: ";   
	        cin>> cgpa1;
	    	while(p->next != NULL)
			{
	    		
	    		if(p->cgpa == cgpa1)
				{
	    			flag = 1 ;
	    			break;
				}
				else
				{
					p = p->next ;
				}
			}
			if(flag ==1 )
			{
				cout<<"\nGiven information is present  \n";
				cout<<"|Searched CGPA is: |"<<cgpa1<<endl;
			}
			else
			{
				cout<<"\nGiven information is not present  \n";
			}
		}
		break;
	}
}
void record :: sort() //sorting of cgpa
{
	Placement_info *curr,*prev,*p;
	int val;
	for(int i=1;i<len;i++)
	{
		prev=head;
		curr=head->next;
		while(curr!=NULL)
		{
			if(curr->cgpa<prev->cgpa)
			{  
				val=curr->cgpa;
				curr->cgpa=prev->cgpa;
				prev->cgpa=val;
				prev=curr;
				curr=curr->next;
			}
			else
			{
				prev=curr;
				curr=curr->next;
			}
		}
	}
}
int main()	
{
	int pos,choice,y,val;
	record l;
	do 
	{
		cout<<"\n                       ----------Welcome to T&P Cell---------       \n";
		cout<<"\n1.Create \n2.Display \n3.Insert \n4.Delete \n5.Update \n6.Search \n7.Sort \n"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				l.create();
				break;
			case 2:		
				l.display();
				break;
			case 3:
				l.insert();
				cout<<"\n|After Inserted |Record|\n"<<endl;
				l.display();
				break;
			case 4:
				l.del();
				cout<<"\n|After Deletion |Record|\n"<<endl;
				l.display();
				break;
			case 5:
				l.update();
				cout<<"\n|Updated List|\n"<<endl;
				l.display();
				break;
			case 6:
				l.search();
				break;
			case 7:
				l.sort();
				l.display();
			    break;
			default:			
			cout<<"Select Correct Choice ";
		}
		cout<<"\nPlease click 1 to continue: ";
		cin>>y;
	} 	
	while(y==1);			
}		
