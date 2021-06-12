#include<iostream>
using namespace std;
template<class x>
void compact(x *items,int count,int start,int end)
{
 register int i;
	for(i=end+1;i<count;i++,start++)
	{
		items[start]=items[i];
	}
	for(;start<count;start++)
	{
		items[start]=(x)0;
	}

}
template<class x>
void bubble_sort(x *items,int count)
{

	register int a,b;
	x t;
	for(a=1;a<count;a++)
	{
		for(b=count-1;b>=a;b--)
		{
			if(items[b-1]>items[b])
			{
				t=items[b-1];
				items[b-1]=items[b];
				items[b]=t;		
	

			}
		}

	}





}

template<class x>
void insertion_sort(x *arr, int n) 
{ 
register   int i, j;
	x key;
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
      
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 

}

int main()
{
	int num[8]={1,2,3,4,5,6,7,8};
	char str[17]="c++ programming";
	cout<<"uncompacted array"<<endl;
	for(int i=0;i<8;i++)
	{
		cout<<num[i]<<"\t";

	}
	cout<<"\n";
	cout<<"uncompacted string "<<endl;
	   for(int i=0;i<17;i++)
        {
                cout<<str[i];

        }
	cout<<endl;
	compact(num,8,3,6);
	compact(str,17,4,10);
	 cout<<"compacted array"<<endl;
        for(int i=0;i<8;i++)
        {
                cout<<num[i]<<"\t";

        }
        cout<<"\n";
        cout<<"compacted string "<<endl;
           for(int i=0;i<17;i++)
        {
                cout<<str[i];

        }
	cout<<"\n";
	int arr1[]={6,2,4,3,5,9,8};
	float arr2[]={7.8,5.3,4.6,2.2,1.9,9.9};
	bubble_sort(arr1,7);
	bubble_sort(arr2,6);
	cout<<"array on bubble sort "<<endl;

	   for(int i=0;i<7;i++)
        {
                cout<<arr1[i]<<"\t";

        }
        cout<<"\n";
cout<<"array on bubble sort "<<endl;

   for(int i=0;i<6;i++)
        {
                cout<<arr2[i]<<"\t";

        }
        cout<<"\n";

	int arr3[]={9,5,3,2,1,7,6};
        float arr4[]={1.3,9.3,8.2,7.3,3.2,2.4};
        insertion_sort(arr3,7);
        insertion_sort(arr4,6);
	cout<<"array on insertion sort "<<endl;        
   for(int i=0;i<7;i++)
        {
                cout<<arr3[i]<<"\t";

        }
        cout<<"\n";
	 cout<<"array on insertion sort "<<endl;

   for(int i=0;i<6;i++)
        {
                cout<<arr4[i]<<"\t";

        }
        cout<<"\n";
	return 0;


	
}

