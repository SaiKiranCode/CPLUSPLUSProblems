#include<iostream>
using namespace std;
int arr[50];
int r;
void printnumber(int);

int main()
{
	int n;
	cout<<"enter the number of elements";
	cin>>n;
	r=n;
	cout<<"enter the elements one by one";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"printing the triangle"<<endl;
	printnumber(n);
	return 0;
}
void printnumber(int n)
{
//	int j;


	
	
/*		for(int i=0;i<n;i++)
		{
		
			j=0;
			cout<<"\n";
			for(int k=0;k<n-1;k++)
			{
				arr[k]=arr[k]+arr[k+1];
				cout<<arr[k]<<"\t";
			}
			--n;

		}

*/
		


		
/*               for(int i=0;i<r;i++)
                {

                        j=0;
                        cout<<"\n";
                        for(int k=0;k<r-1;k++)
                        {
                                arr[k]=arr[k]+arr[k+1];
                               if(n>0)
				{
					return printnumber(n-1);
				
				}
				else
				{
				 
				 cout<<arr[k]<<"\t";
				}
                        }
                        --r;

                }

	

*/
	if(n=0)
	{

		return;

	}
	else
	{
		 printnumber(n-1);
		   for(int i=1;i<r-1;i++)
                cout<<arr[i]+arr[i-1]<<endl;
		r--;


	}
	
}



