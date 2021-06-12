#include<iostream>
using namespace std;
class Matrix
{
	int row,column;
	int **A;
	public:
	Matrix(int r1,int c1)
	{
		this->row=r1;
		this->column=c1;
		int **A=new int*[this->row];
                for(int i=0;i<this->row;i++)
                   A[i]=new int[this->column];
	}
	void set_data()
	{	
	 	cout<<"enter the elements in matrix  "<<endl;
	        for(int i=0;i<this->row;i++)
	        {
        	        for(int j=0;j<this->column;j++)
               		 {
                	        cin>>A[i][j];


               		 }

       		 }



	}
	void display()
	{
  	        cout<<" the elements in matrix  "<<endl;
	        for(int i=0;i<row;i++)
	        {
	                for(int j=0;j<column;j++)
	                {
        	                cout<<A[i][j]<<"\t";


	                }
        	        cout<<endl;
	        }

	}













Matrix operator *(const Matrix &B)
{
	Matrix temp(this->row,B.column);

	for(int i=0;i<this->row;i++)
	{
		for(int j=0;j<B.column;j++)
		{
			for(int k=0;k<B.row;k++)
			{
				temp.A[i][j]=A[i][j]+A[i][k]*B.A[k][j];
			}		
		}
	
	
	}	

      
        
        return temp;       
}
	~Matrix()
	{
		delete [][]A;

	}


};




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
		Matrix m1(r1,c1),m2(r2,c2);
		m1.set_data();
		m1.display();
		m2.set_data();
		Matrix m3(r1,c2);
		m3=m1*m2;
		m3.display();
	
	}
	return 0;
}
