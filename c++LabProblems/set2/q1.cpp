#include<iostream>
using namespace std;
int multiply(int **A,int **B,int r1,int c1,int r2,int c2)
{
	int **C=new int*[r1];
	for(int i=0;i<r1;i++)
	C[i]=new int[c2];
	for(int i=0;i<r1;i++)
        {
                for(int j=0;j<c2;j++)
                {

			C[i][j]=0;
                }


        }

	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int k=0;k<r2;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}		
		}
	
	
	}	
	cout<<"matrix obtained on multiplication"<<endl;
       for(int i=0;i<r1;i++)
        {
                for(int j=0;j<c2;j++)
                {
		
			cout<<C[i][j]<<"\t";
                }
		cout<<endl;

        }
      
        
        return 0;       




}
int main()
{
	 int r1,c1,r2,c2;
 	cout<<" enter the rows and column of first  matrix"<<endl;
	cin>>r1>>c1;
	cout<<"enter the rows and column of second matrix"<<endl;
	cin>>r2>>c2;
	if(c1!=r2)
	{
		cout<<"matrix multiplication not possible"<<endl;
	}	
	else
	{
		int **A=new int*[r1];
		for(int i=0;i<r1;i++)
			A[i]=new int[c1];
	     int **B=new int*[r2] ;
                for(int i=0;i<r2;i++)
                        B[i]=new int[c2];
	cout<<"enter the elements in matrix A "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>A[i][j];
		
		
		}
		
	}
	cout<<"enter the elements in matrix B"<<endl;
    for(int i=0;i<r2;i++)
        {
                for(int j=0;j<c2;j++)
                {
                        cin>>B[i][j];
                       

                }
                
        }

	  cout<<" the elements in matrix A "<<endl;
        for(int i=0;i<r1;i++)
        {
                for(int j=0;j<c1;j++)
                {
                        cout<<A[i][j]<<"\t";

                
                }
		cout<<endl;
        }
       cout<<" the elements in matrix B"<<endl;
    for(int i=0;i<r2;i++)
        {
                for(int j=0;j<c2;j++)
                {
                        cout<<B[i][j]<<"\t";


                }
		cout<<endl;
        }

	multiply(A,B,r1,c1,r2,c2);
	
	}
	return 0;
}
