#include<iostream>
using namespace std;
int main()
{
        int k,i,j,n;
        cout<<"enter the no of rows triangle";
        cin>>n;
	k=n;
	for(i=0;i<n;i++)
	{
		for(j=k;j>0;--j)
		{
			cout<<j;

		}
		cout<<"\n";
		--k;

	}

        return 0;



}
