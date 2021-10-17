#include<iostream>
#include<cstring>
using namespace std;

class Vegetable
{
   private: 
           char str[30];
   public:         
          void getdata();
          void display();
          void operator== (Vegetable str1);
          int operator= (Vegetable str1);
          void operator+ (Vegetable str1);
          void operator<< (Vegetable str1);
          void operator>> (Vegetable str1);
          int operator/ (Vegetable str1);
          
};
void Vegetable::getdata()
{
  cout<<"\nEnter a Vegetable name: ";
  cin>>str;
}

void Vegetable::display()
{
   cout<<"\n"<<str;
}

void Vegetable::operator== (Vegetable str1)
{
   strcpy(str1.str,str);
   cout<<"\nCopied Vegetable name: "<<str1.str;
}

int Vegetable::operator= (Vegetable str1)
{
	if(strcmp(str,str1.str)==0)
    return 1;  //strings are equal
    return 0;  //strings are not equal
}

void Vegetable::operator+ (Vegetable str1)
{
   strcat(str,str1.str);
   cout<<"\n--Vegetable name After Concatination: "<<str;
}

void Vegetable::operator<< (Vegetable str1)
{
   cout<<"\n--The Vegetable name you entered: "<<str1.str;
}

void Vegetable::operator>> (Vegetable str1)
{
   	int i;
   	cout<<"\n--The Vegetable name after reversing: ";
   	for(i=strlen(str1.str);i>=0;i--)
    cout<<str1.str[i];
}

int Vegetable::operator/ (Vegetable str1)
{
   int flag=0,k,i,j,len=strlen(str),len1=strlen(str1.str)-1;
   for(i=0;i<len;i++)
    {
      if(str[i]==str1.str[0])
       {
        if(str[i+len1]==str1.str[len1])
          {
           for(j=i,k=0;j<i+len1+1,k<len1;j++,k++)
             {
              if(str[j]==str1.str[k])
                flag=1;
              else
                { 
                  flag=0;
                  break;
                } 
              }
           }
        }
    }
   	if(flag==0)
    return 0;  
    return 1;  
}

int main()
{
    int opt,c,opt1=1;
    Vegetable a,b;
    while(opt1==1 && opt!=8)
	{
	    cout<<"\n\t\t\t******Operators Function Using Menu driven*******\n1. Comparision\n2. String Copy\n3. Concat";
	    cout<<"\n4. Display\n5. Reverse\n6. Sub String";
	    cout<<"\n7. Exit\n\nEnter your choice: ";
    	cin>>opt;
    	
    	switch(opt)
    	{
        	case 1:
                cout<<"\nEnter the 1st Vegetable name ";
                a.getdata();
                cout<<"\nEnter the 2nd string ";
                b.getdata();
                c=a=b;
                if(c==1)
                cout<<"\n---Vegetable name is Equal---\n";
                else
            	cout<<"\n---Vegetable name is not Equal---\n";
                break;
             
			 case 2:
            	a.getdata();
				a==b;
                break;
                
             case 3:  
                cout<<"\nEnter the 1st Vegetable name: ";
                a.getdata();
                cout<<"\nEnter the 2nd Vegetable name: ";
                b.getdata();
                a+b;  
                break;
                
             case 4:
                a.getdata();
                b<<a;
                break;
                
             case 5:
            	a.getdata();
                b>>a;
                break;

             case 6:
                cout<<"\nEnter the Vegetable name: ";
                a.getdata();
                cout<<"\nEnter the other Vegetable name: ";
                b.getdata();
                c=a/b;
                if(c==1)
                cout<<"\n---Substring---";
            	else
                cout<<"\n---Not a substring---\n";
				break;
            
			case 7: return 0;
				default: cout<<"Invalid choice..try again\n";
      	} 
    	if(opt!=7){
       	cout<<"\nDo you want to continue(Press 1 to continue): ";
       	cin>>opt1;}
    }
    return 0;
}
