#include<iostream>
#include<math.h>
using namespace std;
void row_sum(int a[4][4])
{
	int i; //variable declaration
	int sum;
	for(int i = 0; i < 4; i++)
	{
		sum = 0;
		for(int j = 0; j < 4; j++)
		{
			sum = sum + a[i][j]; //adding each element of row
		}
		cout<<"Total votes "<<"given at place P"<<i+1<<" is: " <<sum<<endl;
	}
	cout<<"\n";
}
void column_sum(int a[4][4])
{
	int sum; //finding sum of the column elements
	cout<<"\n----Compute and display the total number of votes received by each candidate----\n\n"<<endl;
	for(int i = 0; i < 4; i++)
	{
		sum = 0;	
	for(int j = 0;j < 4; j++)
	{
		sum = sum + a[j][i]; //adding each element of column
	}
	
	cout<<"Total number of votes received by candidate C"<<i + 1<<" is: "<<sum<<endl;
	}
}
int main()
{
	int a[4][4],i,j;
	cout<<"\n\n----Read the votes from above data table that containts one row for each place----\n\n"<<endl;
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		cout<<"Enter the vote of candidate C["<<j+1<<"] for post P["<<i+1<<"] : "; //to get each element of matrix from user
		cin>>a[i][j];
	}
	cout<<"\n\n----Display the table content along with total votes given at each place----\n\n"<<endl;
	cout<<"C1  C2  C3  C4\n";
	for(i=0;i<4;i++) //to get the each candidtate votes
	{
		for(j=0;j<4;j++) //to get the votes of each post
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	row_sum(a); //to call the function sum of votes of each post
	column_sum(a); //to call the function sum of votes of each candidates
	return 0;
}
