#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Mystring
{
    string name;
    public:
    Mystring()
    {};
   Mystring(const Mystring &s1,const Mystring &s2)
    {
        name=s1.name+s2.name;

    }
void getname(string t)
    {
        name=t;;
    }
Mystring operator + (Mystring  s2)
    {
        Mystring temp;
        temp.name=name+s2.name;
        return temp;
    }
   void showname()
    {
        cout<<"name is "<<name<<endl;

    }
    friend ostream &operator<<(ostream &stream,Mystring s1);
};
ostream &operator <<(ostream &stream,Mystring s1)
{
    stream<<s1.name<<endl;
    return stream;

}
int main()
{
    Mystring s1,s2;
    string name1,name2;
    cout<<"enter the first name"<<endl;
    cin>>name1;
      cout<<"enter the second name"<<endl;
    cin>>name2;
    s1.getname(name1);
    s2.getname(name2);
    Mystring s3(s1,s2);
    s3.showname();
    cout<<s3;
    return 0;







}






