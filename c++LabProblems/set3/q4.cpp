#include <iostream> 
#include <cstring> 
using namespace std; 
int main() 
{ 
    string str; 
     cout<<"enter the string"<<endl;
     getline(cin, str,'#'); 
	 
   int i=0;
   char ch;
   	int space=0;
	int digits=0;
	int lines=1;
	int alphabets=0;
	int tab=0;
	while(str[i]!='\0')
	{
		ch=str[i];
		if(ch==' ')
		{
			space++;
		}
		else
		{
			if(48<=ch&&ch<=57)
			{
				digits++;
			}
			else
			{
				if((65<=ch&&ch<=90)||97<=ch&&ch<=122)
				{
					alphabets++;
				}
				else
				{
					if(ch=='\n')
					{
						lines++;
					}
					else
					{
						if(ch=='\t')
						{
							tab++;
						}
					
					
					}
				}	
			}
		
		}
	
	
		i++;
	
	}
	 
	 cout<<"\nstring is"<<str<<endl;
	 cout<<"no of alphabets is"<<alphabets<<endl;
	 cout<<"no of digits is"<<digits<<endl;
	 cout<<"no of spaces is"<<space<<endl;
	 cout<<"no of lines is "<<lines<<endl;
	 cout<<"no of tabs is "<<tab<<endl;
	 
	 
	  return 0; 
} 
