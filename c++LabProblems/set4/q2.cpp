#include<iostream>
using namespace std;
#include<string>
class Mystring
{
	string mystr;
	public:
	Mystring()
	{}
	void getstr(string str)
	{
		mystr=str;
	}
	void display()
	{
		cout<<"string is "<<mystr<<endl;
	}
	Mystring operator +(const Mystring &s)
	{
		Mystring temp;
		temp.mystr=this->mystr+s.mystr;
		return temp;		

	}
	void  operator ==(const Mystring &s)
	{
		if(this->mystr==s.mystr)
		{
			cout<<"two string are same  "<<endl;

		}
		else
			cout<<"two string are different"<<endl;

	}
	  void operator !=(const Mystring &s)
        {
                if(this->mystr!=s.mystr)
                {
                        cout<<"two string are diferent  "<<endl;

                }
                else
                        cout<<"two string a same"<<endl;

        }





};
int main()
{
	string a,b;
	Mystring s1,s2,s3;
	cout<<"enter the first name"<<endl;
	cin>>a;
	s1.getstr(a);
	 cout<<"enter the last name"<<endl;
        cin>>b;
        s2.getstr(b);
	s3=s1+s2;
	cout<<"string on concatenation\n";
	s3.display();
	s1==s2;
	s1!=s2;
	return 0;
}
