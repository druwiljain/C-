#include<graphics.h> 
#include<iostream> 
using namespace std; 
int n,i; 
class Drawing //Class declaration
{ 
 	public: 	
	 	int x1,x2,y1,y2,x,y,p,dx,dy,step ,a[200],b[200],c[200],d[200]; 
 	 	void Algo(); //Declaring member function 
 	 	void Line();  	 	
		void symbol();  	 	
		void doctor();  	 	
		void doctor1(); 
}; 
void Drawing::Algo() // Creating or adding in parameters class function 
{ 
	//main algorith of program 
	x = x1;  	
	y = y1; 
	dx = abs(x2-x1); //abs are use as convert negative number in positive 
	dy = abs(y2-y1); 
	p = 2*dx-dy;  	
	if (dx>dy)  
	{ 
 	 	step = dx; 
	} 
	else 
	{ 
		step = dy; 
	} 
	for (int i=0;i<step;i++)
 	{ 
 	 	int k;  	 	
		k=i%n; 
 	 	if(k!=0) 
 	 	{ 
 	 	 	putpixel(x,y,GREEN); //print the point in windows 
 	 	} 
 	 	else 
 	 	{ 
 	 	 	if(x1<=x2) 
 	 	 	{ 
 	 	 	 	if(y1<=y2) 
 	 	 	 	{ 
 	 	 	 	 	if(dx!=0) 
 	 	 	 	 	{ 
 	 	 	 	 	 	x++; 
 	 	 	 	 	} 
 	 	 	 	 	if(dy!=0) 
 	 	 	 	 	{ 
	 	 				if(p<0) 
	 					{ 
	 	 					p+=2*dy; 
						} 
						else 
						{ 
							p+=2*(dy-dx); 
							y++; 
						} 
					} 
 	 	 		} 
 	 	 	 	else 
 	 	 	 	{ 
 	 	 	 	 	if(dx!=0) 
 	 	 	 	 	{ 
 	 	 	 	 		x++; 
 	 	 	 	 	} 
 	 	 	 	 	if(dy!=0) 
 	 	 	 	 	{ 
 	 	 	 	 	 	if(p<0) 
 	 	 	 	 	 	{ 
 	 	 	 	 	 	 	p+=2*dy; 
 	 	 	 	 	 	} 
 	 	 	 	 	 	else 
 	 	 	 	 	 	{ 
 	 	 	 	 	 	 	p+=2*(dy-dx); 
 	 	 	 	 	 	 	y--; 
 	 	 	 	 	 	} 
 	 	 	 	 	} 
	 			} 
			} 
			else 
			{
				if(y1<=y2) 
				{
	 				if(dx!=0) 
	 				{ 
	 					x--; 
	 				} 
 	 	 			if(dy!=0) 
 	 	 			{ 
 	 	 	 			if(p<0) 
 	 	 				{ 
 	 	 	 	 			p+=2*dy; 
 	 	 	 			} 
 	 	 	 			else 
 	 	 	 			{ 
		 	 	 	 		p+=2*(dy-dx); 
		 	 	 	 	 	y++; 
 	 	 	 			} 
 	 	 			}  	 	 	 	 	
				} 
 	 			else 
 	 			{ 
		 	 		if(dx!=0) 
		 	 	 	{ 
		 	 	 	 	x--; 
		 	 	 	} 
			 		if(dy!=0) 
			 		{ 
			 	 		if(p<0) 
			 			{ 
			 	 			p+=2*dy; 
		 				}  	 	
						else 
			 	 		{ 
			 	 	 		p+=2*(dy-dx); 
			 	 	 		y--; 
		 	 	 	 	} 
 	 	 			} 
 	 			} 
 			} 
		} 
		if(x1<=x2) 
		{ 
 			if(y1<=y2) 
 			{ 
 		 		if(dx!=0) 
	 			{ 
					x++; 
 	 			} 
 				if(dy!=0) 
 	 			{ 
 	 	 			if(p<0) 
 	 	 			{ 
 	 	 	 			p+=2*dy; 
 	 	 			} 
	 	 			else 
	 				{ 
 	 					p+=2*(dy-dx);  	y++; 
					}	 
				}
			}
			else 
			{ 
			 	if(dx!=0) 
		 	 	{ 
		 	 	 	x++; 
		 	 	} 
		 	 	if(dy!=0) 
		 	 	{ 
		 	 	 	if(p<0) 
		 	 	 	{ 
		 	 	 	 	p+=2*dy; 
		 	 	 	} 
		 	 	 	else 
		 	 	 	{ 
		 	 	 	 	p+=2*(dy-dx); 
		 	 	 	 	y--; 
		 	 	 	} 
		 	 	} 
		 	}  	 	 	
		} 
		else 
		{ 
			if(y1<=y2) 
			{
				if(dx!=0) 
				{ 
					x--; 
				}
				if(dy!=0) 
				{ 
					if(p<0) 
		 			{	  	 	 	 	 	 	 	
						p+=2*dy; 
		 			} 
		 			else 
		 			{ 
				 		p+=2*(dy-dx); 
				 	 	y++; 
		 			}	 
				}  	 	 	 	
			}	 
			else 
			{ 
				if(dx!=0) 
				{ 
		 			x--; 
				} 
				if(dy!=0) 
				{ 
		 			if(p<0) 
		 			{ 
			 			p+=2*dy; 
					} 
					else 
					{
						p+=2*(dy-dx); 
						y--; 
					} 
				} 
			}
		}
	} 
} 
void Drawing::Line() 
{ 
	cout<<"Enter the point x1: "; 
	cin>>x1; 
	cout<<"Enter the point y1: "; 
	cin>>y1; 
	cout<<endl; 
	cout<<"Enter the point x2: "; 
	cin>>x2; 
 	cout<<"Enter the point y2: "; 
 	cin>>y2; 
 	cout<<endl; 
} 
void Drawing::symbol() 
{ 

	int a[40] = {50,50,200,200,250,250,300,300,50,100,100,100,200,200,300,300,320,320,50,75,150,250,270,270,200,250}; 
 	int b[40] = {75,75,75,75,75,75,65,85,150,175,165,185,165,185,150,190,165,185,275,250,275,275,250,300,350,350}; 
	int c[40] = {100,100,150,150,300,300,350,350,100,50,150,150,250,250,300,300,370,370,100,75,200,300,280,280,250,200}; 
 	int d[40] = {50,100,50,100,50,100,65,85,175,200,165,185,165,185,180,200,165,185,275,300,275,275,250,300,400,400}; 
 	x1 = a[i];  	
	y1 = b[i];  	
	x2 = c[i];  	
	y2 = d[i]; 
} 
void Drawing::doctor1() 
{ 
	//doctor symbol 
 	for(int j=0;j<200;j++) 
 	{ 
 	 	if(j<100) 
 	 	{ 
 	 	 	a[j] = 100;  	 	 	
			b[j] = 200+j;  	 	 	
			c[j] = 400;  	 	 	
			d[j] = 200+j; 
 	 	} 
 	 	else 
 	 	{ 
 	 	 	a[j] = 100+j;  	 	 	
			b[j] = 100;  	 	 	
			c[j] = 100+j;  	 	 	
			d[j] = 400; 
 	 	} 
 	} 
}
void Drawing::doctor()
{ 
 	x1 = a[i];  	
	y1 = b[i];  	
	x2 = c[i];  	
	y2 = d[i]; 
} 
int main() 
{ 
 	int choice1, choice2;  	
	char repeat = 'y'; 
 	Drawing D; // creating object  	
	while(repeat == 'y') //creating menu driver program 
 	{ 
 	 	cout<<"-----Welcome-----"<<endl<<"1. Line"<<endl<<"2. Symbol"<<endl<<"3. DOCTOR"<<endl<<"4. Line(Text)"<<endl<<"Enter your choice: "; 
 	 	cin>>choice1;  	 	
		cout<<endl;   	 	
		switch(choice1) 
 	 	{ 
 	 	 	case 1: 
 	 	 	 	cout<<"Select type of line\n1. Thin\n2. Thick\n3. Dotted\n4. Dash"<<endl<<"Enter your choice: "; 
 	 	 	 	cin>>choice2;  	 	 	 	
				cout<<endl; 
 	 	 	 	switch(choice2) 
 	 	 	 	{ 
 	 	 	 	 	case 1: //thin 
			 	 	 	n=1000; 
			 	 	 	D.Line(); //calling class member function  
			 	 	 	initwindow(750,750); 
			 	 	 	D.Algo(); 
	 	 	 	 	 	break; 
	 	 	 	 	 	
 	 	 	 	 	case 2:  	 	 	 	 	 	//thick  	 	 	 	 	 	
						n=1000;  	 	 	 	 	 	
						D.Line(); 
 	 	 	 	 	 	initwindow(750,750); 
 	 	 	 	 	 	D.Algo(); 
 	 	 	 	 	 	break; 
 	 	 	 	 	 	
 	 	 	 	 	case 3:  	 	 	 	 	 	//doted 
 	 	 	 	 	 	n=2; 
 	 	 	 	 	 	D.Line(); 
 	 	 	 	 	 	initwindow(750,750); 
 	 	 	 	 	 	D.Algo(); 
 	 	 	 	 	 	break; 
 	 	 	 	 	 	
 	 	 	 	 	case 4:  	 	 	 	 	 	//dash 
 	 	 	 	 	 	n=5; 
 	 	 	 	 	 	D.Line(); 
 	 	 	 	 	 	initwindow(750,750); 
 	 	 	 	 	 	D.Algo(); 
 	 	 	 	 	 	break; 
 	 	 	 	 	 	
 	 	 	 	 	default: 
 	 	 	 	 	{ 
 	 	 	 	 	 	cout<<"Please give valid input!!!"<<endl; 
	 	 			} 
	 	 	 		break; 
	 			} 
	 			break; 
 	 			
				case 2:  	 	 	//Symbol  	 	 	
					n=1000; 
		 	 	 	initwindow(750,750);  	 	 	
					for(i =0;i<30;i++) 
		 	 	 	{ 
		 	 	 	 	//Doctor 
		 	 	 	 	D.symbol();  	 	 	 	
						D.Algo(); 
		 	 	 	} 
 	 	 			break; 
 	 			case 3:  	 	 	
				  	n=750; 
		 	 	 	initwindow(750,750);  	 	 	
					D.doctor1(); 
		 	 	 	for(i=0;i<200;i++) 
		 	 	 	{ 
		 	 	 	 	D.doctor();  	 	 	 	
						D.Algo(); 
		 	 	 	} 
		 	 	 	setbkcolor(RED); 
		 	 	 	outtextxy(225,240,"DOCTOR"); 
		 	 	 	break;
					    
 	 			case 4:  	 	 	
					n=1000; 
					D.Line(); 
					initwindow(750,750); 
					D.Algo(); 
					setcolor(YELLOW); 
					outtextxy(500,550,"DRAWN BY DRUWIL JAIN"); 
					break; 
						
 	 			default: 
		 	  	{ 
		 	  	 	cout<<"Please, Enter correct choice....."<<endl; 
		 	 	} 
 	 	 		break; 
 	 		} 
  			cout<<"Do you want to continue then press y otherwise n: ";  
 	 		cin>>repeat; 
	 	 	cout<<endl;      
	 	 	 
 	} 
	 	getch();  
	 	closegraph(); 
	 	return 0; 
} 
