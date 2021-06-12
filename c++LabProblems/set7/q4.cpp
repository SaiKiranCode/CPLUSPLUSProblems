#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	char ch;
	ofstream fout("sample1.txt");
	ifstream fin("sample.txt");
	
	
	while(!fin.eof())
	{
		ch=fin.get();
	sos:if(ch==' ')
		{	ch=fin.get();
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				while(ch!=' ')
				{
					cout<<ch;
					fout<<ch;
					ch=fin.get();
				}
				cout<<ch;
				fout.put(ch);	
				if(ch==' ')
				{
					
					goto sos;
				}
									

			}
		
		}
		
	}
	fin.close();
	fout.close();
	return 0;







}