#include<iostream>
#include<string.h>
using namespace std;

class Recursion
{
	public:
	    char string[100];
        int count=0;
 	
 	void combination(char* str, int no_character, int index=0)
   {
	for (int i=0; i<strlen(str); i++)
	  { 
		string[index] = str[i];
		if(index == no_character-1)
		{
			count++;
			cout<<string<<endl;
		}
		else	
			combination(str, no_character, index+1);	
	  } 
   }
   
};
int main()
{
	Recursion r1;
	int count;
	char str[100];
	cout<<"Enter String : ";
	cin>>str;
	
	for(int i=1; i<=strlen(str); i++)
	{
		r1.combination(str, i);
    }
    cout<<"There are "<< count << " combination.";  
	
	return 0;
}
