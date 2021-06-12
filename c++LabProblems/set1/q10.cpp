#include<iostream>
using namespace std;
#define MAXSIZE 30
class circle
{
	float radius,area;
	public:
	float compute_area(float a)
	{
		radius=a;
		area=3.14*radius*radius;
		return area;
	}
	float compute_area()
	{
		return area;

	}
};
void swapbyref(circle *a ,circle *b)
{
        circle t;
        t=*a;
        *a=*b;
        *b=t;
	
}

void  sortarea(circle *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j].compute_area()<arr[i].compute_area())
			{
				swapbyref(&arr[i],&arr[j]);	
			}



		}
	


	}


}







int main()
{
	int n;
	float radius;
	cout<<"enter the no of  elements "<<endl;
	cin>>n;
	circle arr[MAXSIZE];
	cout<< "enter the radius of circles"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>radius;
		arr[i].compute_area(radius);
	}
	sortarea(arr,n);
	cout<<"area in the sorted order is ";
	   for(int i=0;i<n;i++)
        {
  
	       cout<< arr[i].compute_area()<<endl;
        }

	return 0;
}
