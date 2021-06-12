#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
class student
{
	public:
 	char name[20];
	int id;

	student()
	{}
	student(char *name,int id)
	{
		strcpy(this->name,name);
		this->id=id;
	}
	void display()
	{
		cout<<"name is "<<name<<endl;
		cout<<" id is "<<id<<endl;

	}



};
int main()
{
	char name[20];
	cout<<"enter the name "<<endl;
	cin>>name;
	
	student s(name,7);
	ofstream fout("sturecord",ios::out);
	if(!fout)
	{
		cout<<"cannot open a file"<<endl;	
		return 1;
	}
	fout.write((char *)&s,sizeof(s));
	fout.close();
	ifstream fin("sturecord",ios::in);
	if(!fin)	
	{
		cout<<"cannot open file\n";
		return 1;

	}
	fin.read((char *)&s,sizeof(s));
	cout<<"name is "<<s.name<<endl;
	cout<<"id is "<<s.id<<endl;
	fin.close();
	return 0;



}
