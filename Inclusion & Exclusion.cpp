#include<iostream> 
using namespace std; 
int intersection2(int Cricket[], int Basketball[], int size1, int size2, int ch1)  //FUNCTION FOR INTERSECTION OF 2 SETS 
{ 
	int i,j; 
	int n; 
	int c[10]; 
	int k=0; 
	for(i=0;i<size1;i++) 
	{ 
		for(j=0;j<size2;j++) 
		{ 
		//IF ELEMENTS ARE SAME THEN ADD TO INTERSECTION 
			if(Cricket[i]==Basketball[j]) 
			{ 
		    	c[k]=Cricket[i]; 
		    	k++; 
			}	 
		} 
	} 
 	cout<<k<<"{"; 
	for(i=0;i<k-1;i++) 
	{	 
   		cout<<c[i]<<","; //DISPLAY INTERSECTION ELEMENTS 
	}	 
    cout<<c[i]<<"}"; 
	if(ch1==1) 
	{ 
		//FOR Cricket AND BASKETBALL 
    	cout<<"People prefering both Cricket and Basketball"<<endl; 
	}	 
	if(ch1==2) 
	{ 
		//FOR CRICKET AND HOCKEY 
	    cout<<"People prefering Basketball tea and Hockey"<<endl; 
	} 
	if(ch1==3) 
	{ 
		//FOR CRICKET AND TENNIS 
		cout<<"People prefering both Hockey and Cricket"<<endl; 
	} 
	if(ch1==4) 
	{ 
		//FOR BASKETBALL AND HOCKEY 
	    cout<<"People prefering both Basketball and Hockey"<<endl; 
	} 
	if(ch1==5) 
	{ 
		//FOR BASKETBALL AND TENNIS 
	    cout<<"People prefering both Basketball and Tennis"<<endl; 
	} 
	if(ch1==6) 
	{ 
		//FOR HOCKEY AND TENNIS 
	    cout<<"People prefering both Hockey and Tennis"<<endl; 
	} 
	cout<<endl; 
	return k; 
} 
int intersection3(int Cricket[],int Basketball[], int Hockey[],int size1, int size2, int size3, int ch2) 
//FUNCTION FOR INTERSECTION OF 3 SETS 
{ 
	int i,j,c; 
	int k=0,m=0; 
	int n,flag1,flag2; 
	int d[size1]; 
	
	for(i=0;i<size1;i++) 
	{ 
		flag1=0,flag2=0; 
		for(j=0;j<size2;j++) 
		{ 
			if(Cricket[i]==Basketball[j]) 
			{ 
	    		flag1=1; 
				break; 
			} 
		} 
		for(k=0;k<size3;k++) 
		{ 
			if(Cricket[i]==Hockey[k]) 
			{ 
	    		flag2=1; 
				break; 
			}		 
		} 
		if(flag1==1 && flag2==1) 
		{ 
	    	d[m]=Cricket[i]; 
	    	m++; 
		} 
	} 
	cout<<m<<" "; 
	cout<<"{"; 
	for(i=0;i<m-1;i++) 
	{ 
		cout<<d[i]<<","; //DISPLAY INTERSECTION ELEMENTS 
	} 
	cout<<d[i]<<"}"; 
	if(ch2==1) 
	{ 
		//FOR CRICKET, BASKETBALL AND HOCKEY 
		cout<<"People prefering both Cricket, Basketball and Hockey"<<endl; 
	} 
	if(ch2==2) 
	{ 
		//FOR CRICKET, BASKETBALL AND TENNIS 
	    cout<<"People prefering both Cricket, Basketball and Tennis"<<endl; 
	} 
	if(ch2==3) 
	{ 
		//FOR CRICKET, HOCKEY AND TENNIS 
	    cout<<"People prefering both Cricket, Hockey and Tennis"<<endl; 
	} 
	if(ch2==4) 
	{ 
		//FOR BASKETBALL, HOCKEY AND TENNIS 
	    cout<<"People prefering both Basketball, Hockey and Tennis"<<endl; 
	} 
	cout<<endl; 
	return m; 
} 
int intersection4(int Cricket[],int Basketball[], int Hockey[], int Tennis[], int size1, int size2, int size3, int size4) 
//FUNCTION FOR INTERSECTION OF 4 SETS 
{ 
	int i,j,c; 
	int k=0,p=0,l=0; 
	int n,flag1,flag2,flag3; 
	int d[size1]; 
	for(i=0;i<size1;i++) 
	{ 
		flag1=0,flag2=0,flag3=0; 
		for(j=0;j<size2;j++) 
		{ 
			if(Cricket[i]==Basketball[j]) 
			{ 
	    		flag1=1; 
				break; 
			} 
		} 
		for(k=0;k<size3;k++) 
		{ 
			if(Cricket[i]==Hockey[k]) 
			{ 
	    		flag2=1; 
				break; 
			} 
		}	 
		for(l=0;l<size4;l++) 
		{ 
			if(Cricket[i]==Tennis[l]) 
			{ 
	   			flag3=1; 
				break; 
			} 
		} 
		if(flag1==1 && flag2==1 && flag3==1) 
		{ 
	    	d[p]=Cricket[i]; 
	    	p++; 
		} 
	} 
	cout<<p<<" "; 
	cout<<"{"; 
	for(i=0;i<p-1;i++) 
	//DISPLAY INTERSECTION ELEMENTS
	{ 
	    cout<<d[i]<<",";  
	} 
	cout<<d[i]<<"}"<<"People preferring all the Sports"; 
	cout<<endl; 
	return p; 
} 
int union3(int Cricket[], int Basketball[], int Hockey[],int Tennis[], int size1, int size2, int size3,int size4) 
{ 
	int total; 
 	//USING PRINCIPLE OF INCLUSION AND EXCLUSION BY FORMULA FOR UNION 
	total=size1+size2+size3+size4- 
	intersection2(Cricket,Basketball,size1,size2,1)- 
	intersection2(Cricket,Hockey,size1,size3,2)- 
	intersection2(Cricket,Tennis,size1,size4,3)- 
	intersection2(Basketball,Hockey,size2,size3,4)- 
	intersection2(Basketball,Tennis,size2,size4,5)- 
	intersection2(Hockey,Tennis,size3,size4,6)+ 
	intersection3(Cricket,Basketball,Hockey,size1,size2,size3,1)+ 
	intersection3(Cricket,Basketball,Tennis,size1,size2,size4,2)+ 
	intersection3(Cricket,Hockey,Tennis,size1,size3,size4,3)+ 
	intersection3(Basketball,Hockey,Tennis,size2,size3,size4,4)- 
	intersection4(Cricket,Basketball,Hockey,Tennis,size1,size2,size3,size4); 
	return total; 
} 
int main() 
{ 
	int Cricket[20],Basketball[20],Hockey[20],Tennis[20]; 
	int i; 
	int size1; 
	cout<<"\n*****WELCOME TO THE SURVEY INFORMATION OF SPORTS*****";
	cout<<"\n\nEnter the number of people prefering Cricket: "; 
	//ENTER SIZE OF CRICKET SET 
	cin>>size1; 
	for(i=0;i<size1;i++) 
	{ 
	    cin>>Cricket[i]; //ENTER SET 
	} 
	int size2; 
	cout<<"\nEnter the number of people prefering Basketball: "; 
	//ENTER SIZE OF BASKETBALL SET 
	cin>>size2; 
	for(i=0;i<size2;i++) 
	{ 
	    cin>>Basketball[i]; //ENTER SET 
	} 
	int size3; 
	cout<<"\nEnter the number of people prefering Hockey: "; 
	//ENTER SIZE OF HOCKEY SET 
	cin>>size3; 
	for(i=0;i<size3;i++) 
	{ 
	    cin>>Hockey[i]; //ENTER SET 
	} 
	 
	int size4; 
	cout<<"\nEnter the number of people prefering Tennis: "; 
	//ENTER SIZE OF TENNIS SET 
	cin>>size4; 
	for(i=0;i<size4;i++) 
	{ 
	    cin>>Tennis[i]; //ENTER SET 
	} 
	cout<<endl;  
	int total=union3(Cricket,Basketball,Hockey,Tennis,size1,size2,size3,size4); //CALL UNION FUNCTION 
	cout<<endl<<total<<" number of people prefering atleast one of the sport are "; 
	return 0; 
}
