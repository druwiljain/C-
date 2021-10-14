#include<bits/stdc++.h>
using namespace std;

class sparse_matrix
{  
	public:
		const static int MAX=10;

	int data[MAX][3],len;
  	sparse_matrix(int r,int c,int l)
	{
    	data[0][0]=r;
	    data[0][1]=c;
	    data[0][2]=l;
	    len=0;
	}
	void insert(int r,int c,int val) // function to insert the array element
	{
    	if(r>data[0][0] || c>data[0][1])
    	{
    		cout<<"\nEnter the index within range: ";
    	} 
   		else
	    data[len+1][0]=r;
	    data[len+1][1]=c;
	    data[len+1][2]=val;
	    len++;
	}
	void print()  // function to print the array element
	{ 
   		int i;
   		cout<<"\nDimension: "<<data[0][0]<<"x"<<data[0][1];
   		cout<<"\nRow\tColumn\tValue\n";
   		for(i=0;i<=len;i++)
   		{
    		cout<<data[i][0]<<"\t"<<data[i][1]<<"\t"<<data[i][2]<<endl;
   		}
	} 
  	void add(sparse_matrix b)   // function to add the 2 array elements
  	{
  		int a_position=1, b_position=1;
  		sparse_matrix resultant(data[0][0],data[0][1],0);
  		if(data[0][0]!=b.data[0][0] || data[0][1]!=b.data[0][1])
	 	{
	 		cout<<"\nMatrices Addition not possible";
	  	} 
		else
	 	while(a_position<=len && b_position<=len) 
	 	{
	 		if(data[a_position][0]>b.data[b_position][0] || data[a_position][0] ==b.data[b_position][0] && data[a_position][1]>b.data[b_position][1])
	 		{
	 			resultant.insert(b.data[b_position][0],b.data[b_position][1],b.data[b_position][2]);
	 			b_position++;
			}
			else if(data[a_position][0]<b.data[b_position][0]||data[a_position][0] ==b.data[b_position][0]&& data[a_position][1]<b.data[b_position][1]) 
			{
				resultant.insert(data[a_position][0],data[a_position][1],data[a_position][2]);
				a_position++;
		 	}
			else
			{
				int sum_value = data[a_position][2]+b.data[b_position][2];
            	if(sum_value!=0)
            	{
              		resultant.insert(data[a_position][0], data[a_position][1],sum_value);
			  		a_position++;
			  		b_position++;
            	}
		 	} 			
		}
	 	resultant.data[0][2]= resultant.len;
	 	cout<<"\nADDITION OF SPARSE MATRIX: ";
	 	resultant.print();
	}   
   	sparse_matrix transpose_()  // function to transpose the array element
   	{
   		sparse_matrix transpose(data [0][1], data[0][0],data[0][2]);
     	if(len>0)
	   	{
         	for(int i=0;i<data[0] [1];i++) // TO RUN THE LOOP UPTO COLUMN VALUE
        	{
           		for(int j=1;j<=data [0][2];j++) // TO TREVERSE THE ROW-COLUMN VALUES
           		{
         		if(data[j][1]==i)
         		{
	         		transpose.len++;
	            	transpose.data[transpose.len][0] = data[j][1];
	            	transpose.data[transpose.len][1] = data[j][0];
	        		transpose.data[transpose.len][2] = data[j][2];
		    	}
			}
    	}
	}
    transpose.print();
    return transpose;
}    
sparse_matrix multiply(sparse_matrix t) // function to multiply the array element
{
	int sum,t1,t2, t3=1;
  	sparse_matrix mresult(data[0][0],t.data[0][0],0);
  	for(int i=0;i<data[0][0];i++)
  	{
   		for(int j=0;j<t.data[0][1];j++)
   		{  
     		sum = 0;
		    t1 = 1;
		    t2 = 1;
		    int flag1 = 0; int flag2 = 0;
		    while(t1<=data[0][2])
     		{
       			if(data[t1][0] == i)
       			{
        			flag1 = 1;
        			break;
       			}
       			t1++;
     		}
    		while(t2<=t.data[0][2])
   			{
    			if(t.data[t2][0] == j)
    			{
     				flag2 = 1;
     				break;
    			}
    			t2++;
   			}
   			if(flag1 == 1 && flag2 == 1)
  			{
    			while(data[t1][0]==i && t.data[t2][0]==j)
   				{
     				if(data[t1][1] == t.data[t2][1])
    				{
      					sum = sum + data[t1][2] * t.data[t2][2];
      					t1++; 
	  					t2++;
     				}
     				else if(data[t1][1]< t.data[t2][1])
    				{
      					t1++;
    				}
		    		else
		    		{
		      			t2++;
		    		}
   				}
		   		if(sum>0)
		   		{
		    		mresult.insert(i,j,sum);
		    		t3++;
		   		}
  			}
 		}
	}
 	mresult.data[0][2] = t3-1;
 	mresult.print();
}    
};

int main()
{  
  	int r,c,l,val,i,j,choice;
  	cout<<"\nEnter No of Rows of Sparse Matrix 1: ";
  	cin>>r;
  	cout<<"Enter No of Column of Sparse Matrix 1: ";
  	cin>>c;
  	cout<<"\nEnter No of Non-Zeros elements in Sparse Matrix 1: ";
  	cin>>l;
  	sparse_matrix a(r,c,l),b(r,c,l);     // default constructor call
  	for(i=0;i<l;i++)
  	{
	   	cout<<"\nEnter Row no: ";
	  	cin>>r;
		cout<<"Enter column no: "; 
	   	cin>>c;
	   	cout<<"Enter the value: "; 
	   	cin>>val;
	   	a.insert(r,c,val);   // 1st matrix element insertion
	}
  	a.print();
  	cout<<"\nEnter No. of Non-Zeros elements in Sparse Matrix 2: ";
  	cin>>l;
  	cout<<"\nEnter the values for 2nd sparse matrix: ";
   	for(i=0;i<l;i++)
  	{
   		cout<<"\nEnter Row no: ";
   		cin>>r;
   		cout<<"Enter column no: ";
   		cin>>c;
   		cout<<"Enter the value: "; 
   		cin>>val;
   		b.insert(r,c,val);  // 2nd matrix element insertion
  	}
  	b.print();
  	while(choice!=0)
  	{
   		cout<<"\n1. TRANSPOSE OF SPARSE MATRIX"<<"\n2. ADDITION OF SPARSE MATRIX"<<"\n3. MULTIPLICATION OF SPARSE MATRIX"<<"\n0. TO EXIT";
   		cin>>choice;
   		switch(choice)
   		{
		  	case 1:
		  		cout<<"\n     TRANSPOSE OF SPARSE MATRIX 1";
		  		a.transpose_();
		  		break;
			  
			case 2:
				a.add(b);
				break;
			
			case 3:
				b=b.transpose_();
			  	cout<<"\nMULTIPLICATION OF SPARSE MATRICES";
		        a.multiply(b);
		        break;
		        
		    case 0:
			    break;
				    
			default :
				cout<<"Please enter correct choice!!!"<<endl;
			break;
    	} 
  	}
  	return 0;
}
