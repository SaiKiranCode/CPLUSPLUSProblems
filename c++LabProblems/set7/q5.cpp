#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	char ch;
	ifstream fin;
	int count=0,lines=0;
	fin.open("proverb.txt");
	ch=fin.get();
	if(ch=='A')
	{
		count++;
	}
	while(!fin.eof())
	{
		if(ch=='\n')
		{
			ch=fin.get();
			if(ch=='A')
			{
				count++;
			}
			lines++;
		
		}
	
		ch=fin.get();
	
	}
	cout<<"total no of lines is "<<lines<<endl;
	cout<<"no of lines starting with A is "<<count<<endl;
	cout<<"no of lines not starting with A is "<<lines-count<<endl;

	return 0;
}
