#include<iostream>
using namespace std;
int main()
{
        int k,i,j,n,t,l;
        cout<<"enter the no of rows triangle";
        cin>>n;
	k=n;
	l=n;
	for(i=0;i<n;i++)
	{
              for(t=l;t>0;--t)
                {
                        cout<<" ";

                }

		for(j=1;j<k;j++)
		{
			cout<<j;

		}
		for(;j>0;--j)
		{
			cout<<j;
		}
		l++;
		--k;
		cout<<"\n";
	}

        return 0;



}
