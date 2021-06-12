#include<iostream>
using namespace std;
#include<string.h>
#define MAXSIZE 30

int check(char p)
{
	if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u'||p=='A'||p=='E'||p=='O'||p=='U'||p=='I')
	{
	
		return 1;
	}
	else
	{
		return 0;
	}


}
int main()
{
	int l,t,count=0;
	char name[MAXSIZE];
	cout<<"enter the name ";
	cin>>name;
	char *p;
	p=name;	
	l=strlen(name);
	t=l;
	while(t>0)
	{
		if(check(*p))
		{
			count++;
		}
		p++;
		t--;
	}
	cout<<"no of vowels is"<<count;
	return 0;
}
