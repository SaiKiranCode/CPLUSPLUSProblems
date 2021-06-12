#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int id;
	char name[20];
	ofstream myfile("stud");
	cout<<"enter the student"<<endl;
	while(cin>>id>>name)
	{
	myfile<<id<<""<<name;
	}
	myfile.close();
	return 0;
}
