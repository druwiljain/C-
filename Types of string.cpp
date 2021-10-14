#include<iostream>
#include<string>
using namespace std;
class str
{
    string a,b,c,r,s1,s2,s3,ss;
    int i,ct,n,j,len,k;
    public:
    void length()
    {	cout<<"\n------LENGTH OF STRING------\n";
        ct=0;
        cout<<"\nENTER STRING: ";

        cin>>a;
        for(i=0;a[i]!='\0';i++)
            {
                ct++;
            }
        cout<<"LENGTH OF STRING: "<<ct;
    }
    void concat()
    {	cout<<"\n------STRING CONCATINATION------\n";

        cout<<"\nENTER STRING 1: ";
        cin>>b;
        cout<<"ENTER STRING 2: ";
        cin>>c;
        cout<<"\nENTERED STRINGS ARE: "<<b<<"\t"<<c;
        n=0;
        for(i=0;b[i]!='\0';i++)
        {
            r[n]=b[i];
            n++;
        }
        for(j=0;c[j]!='\0';++j)
        {
            r[n]=c[j];
            n++;
        }
        cout<<"\n\nRESULTANT STRINGS: ";//<<r;
        for(i=0;r[i]!='\0';i++)
        {
                    cout<<r[i];
        }
    }
    void  copy()
    {
        cout<<"\n------COPY OPERATION------";
        cout<<"\nENTER STRING: ";
        cin>>s1;
        ct=0;
        for(i=0;s1[i]!='\0';i++)
            {
                ct++;
            }

        for(i=0;i<ct;i++)
                    {
                        s2[i]=s1[i];
                    }
            cout<<"\nCOPIED STRING: ";

            cout<<s2;
    }
    void rev()
    {
        cout<<"\n------REVERSE OPERATION------";
        cout<<"\n\nENTER STRING: ";
        cin>>s3;
        ct=0,k=0;
        for(i=0;s3[i]!='\0';i++)
        {
                        ct++;
        }
        for(i=ct-1;i>=0;i--,k++)
        {
            ss[k]=s3[i];
        }
        cout<<"\nREVERSED: ";

        for(i=0;i<k;i++)
        cout<<ss[i];
    }
    void eq()
    {	cout<<"\n------COMPARING OPERARTION------";
        cout<<"\n\nENTER STRING 1: ";
        cin>>s1;
        cout<<"ENTER STRING 2: ";
        cin>>s2;
        if(s1==s2)
        {
            cout<<"\n*****STRINTGS ARE SAME*****";
        }
        else
        {
            cout<<"\n!!! STRINGS ARE NOT SAME !!!";
        }

    }
    void sub()
    {
        cout<<"\n------SUBSTRING OPERATION------";
        cout<<"\n\nENTER A STRING: ";
        cin>>a;
        int m=0;
        cout<<"ENTER A STRING: ";
        cin>>b;
        for(i=0;a[i]!=0;i++)
        	{
        			if(a[i]==b[0])
        		{
        			for(j=1;b[j]!=0;j++)
        			{
        				if(a[i+j]!=b[j])
        				{
        					break;
        				}
        			}
        			if(b[j]==0)
        			{
        				i=i+j-1;
        				m++;
        			}
        		}
        	}
        		if(m==0)
        		{
        			cout<<"\n!!!SUBSTRING IS NOT PRESENT!!!";
        		}
        		else
        		{
        			cout<<"\n*****"<<b<<" IS REPEATED "<<m<<"TIMES*****";
        		}
        }
};
   int main()
{
    str s;
    char ans;
    int ch;
    do

    {
        cout<<"-------WELCOME TO OPREATORS MENU-------\n\n";
        cout<<"1. LENGTH\n2. CONCATINATION\n3. REVERSE\n4. EQUALITY\n5. SUBSTRING\n6. COPY\n\nENTER YOUR CHOICE: ";
        cin>>ch;
        switch(ch)
        {
            case 1 :s.length(); break;
            case 2 :s.concat();	break;
            case 3 :s.rev();	break;
            case 4 :s.eq();		break;
            case 5 :s.sub();	break;
            case 6 :s.copy();	break;
            default:cout<<"\nOOPS SOMETHING WENT WRONG!!!\n";
        }
    }
	while(0);
    return 0;
}
