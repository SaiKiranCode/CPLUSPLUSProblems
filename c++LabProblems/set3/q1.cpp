#include<iostream>
using namespace std;
int * insert_at_front(int *arr,int n,int k)
{
	int *temp=new int[n+1];
	temp[0]=k;
	for(int i=1;i<n+1;i++)
	{
		temp[i]=arr[i-1];
	}
	delete arr;
	return temp;


}
int * insert_at_end(int *arr,int n,int k)
{
	   int *temp=new int[n+1];
        temp[n]=k;
        for(int i=0;i<n;i++)
        {
                temp[i]=arr[i];
        }
        delete arr;
        return temp;



}
int * insert_at_pos(int *arr,int n,int k,int p)
{
           int *temp=new int[n+1];
        
        for(int i=0;i<n+1;i++)
        {
		if(i==p-1)
		{
			temp[i]=k;
			
		}
		else
		{
			if(i<p-1)
                	temp[i]=arr[i];
			else
				temp[i]=arr[i-1];
		}
        }
        delete arr;
        return temp;



}

int * delete_at_front(int *arr,int n)
{
        int *temp=new int[n-1];
        
        for(int i=0;i<n-1;i++)
        {
                temp[i]=arr[i+1];
        }
        delete arr;
        return temp;


}
int * delete_at_end(int *arr,int n)
{
        int *temp=new int[n-1];

        for(int i=0;i<n-1;i++)
        {
                temp[i]=arr[i];
        }
        delete arr;
        return temp;


}
int * delete_at_pos(int *arr,int n,int p)
{
        int *temp=new int[n-1];

        for(int i=0;i<n-1;i++)
        {
		if(i<p-1)
                temp[i]=arr[i];
		else
		{
			temp[i]=arr[i+1];
		}


        }
        delete arr;
        return temp;


}
int * delete_firstvalue(int *arr,int n,int k)
{
	int *temp=new int[n-1];
	int flag=0;
	int i;
	for( i=0;i<n-1;i++)
	{
		if(arr[i]==k)
		{
			flag=1;
		}
		if(flag==1)
		{
			temp[i]=arr[i+1];	
				
		}
		else
		{
			temp[i]=arr[i];
		}
	
	}
	if(arr[i]==k)
	{
		flag=1;
	}
	if(flag==0)
	{
		cout<<"value is not present"<<endl;
	}
	delete arr;
	return temp;

}


int main()
{
	int n,k;
	int choice;
	cout<<"enter the no of elements in array "<<endl;
	cin>>n;
	int *arr=new int[n];
	
	cout<<"enter the elements one by one"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	cout<<"elements in the array is "<<endl;
	  for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<"\t";

        }
	cout<<"\n";
	cout<<"1)enter to insert element at the begining\n2)insert at end\n3)to insert at given position\n4)delete first element\n5)delete last element\n6)to delete element at given position\n7)to delete first element with given value\n8)to exit\n";

	do{
		cout<<"\nenter the choice "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				
				cout<<"enter the element ";
				cin>>k;
				arr=insert_at_front(arr,n,k);
				cout<<"after inserting at front ";
				for(int j=0;j<n+1;j++)
				{
					cout<<arr[j]<<"\t";
				
				
				}
				n=n+1;
				break;
			case 2:
				cout<<"enter the element ";
                                cin>>k;
                                arr=insert_at_end(arr,n,k);
  				cout<<"after inserting at end"<<endl;	
				for(int j=0;j<n+1;j++)
                                {
                                        cout<<arr[j]<<"\t";


                                }
				n=n+1;


				break;
		
			case 3: 
				int position;
				cout<<"enter the element";
				cin>>k;
				cout<<"enter the position";
				cin>>position;
				arr=insert_at_pos(arr,n,k,position);
		                 cout<<"after inserting at "<<position<<endl;
                                for(int j=0;j<n+1;j++)
                                {
                                        cout<<arr[j]<<"\t";


                                }
				n=n+1;

				
		
				break;
			case 4:
       
	 			if(n<1)
				{
					cout<<"deletion not posible";

				}
				else
				{
				arr=delete_at_front(arr,n);
                                cout<<" deleting at front"<<endl;
                                for(int j=0;j<n-1;j++)
                                {
                                        cout<<arr[j]<<"\t";


                                }
				n=n-1;
				}
				break;
				case 5:
				if(n<1)
                                {
                                        cout<<"deletion not posible";

                                }
				else
				{
	                          arr=delete_at_end(arr,n);
                                cout<<" deleting at end"<<endl;
                                for(int j=0;j<n-1;j++)
                                {
                                        cout<<arr[j]<<"\t";


                                }
				n=n-1;
				}
				break;
			case 6:
				if(n<1)
                                {
                                        cout<<"deletion not posible";

                                }
				else
				{	
     				cout<<"enter the position";
   				   cin>>position;
				   cout<<"after deleting at "<<position<<endl;
				arr=delete_at_pos(arr,n,position);
				    for(int j=0;j<n-1;j++)
                                {
                                        cout<<arr[j]<<"\t";


                                }
				n=n-1;
				}
				break;
			case 7:
			      if(n<1)
                                {
                                        cout<<"deletion not posible";

                                }
				else
				{
					cout<<"enter the any value present in array"<<endl;
					cin>>k;
					arr=delete_firstvalue(arr,n,k);
				          for(int j=0;j<n-1;j++)
	       	                        {
               		                        cout<<arr[j]<<"\t";


                        	        }
                               		 n=n-1;

			
				}
				break;
			
			case 8:
				exit(0);
				break;			
		


		}







	}while(choice!=8);






	return 0;
}
