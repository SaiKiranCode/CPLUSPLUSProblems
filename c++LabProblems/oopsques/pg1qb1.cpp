#include<iostream>
using namespace std;

class mystack
{
    int *arr;
    int top;
    int len;
    public:
    mystack(int len)
    {
        len=len;
        arr=new int[len];
        top=-1;
    }
    void push(int element)
    {
        if(top==len-1)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            arr[++top]=element;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1 ;
        }
        else
        {
            return(arr[top--]);
        }


    }
friend ostream &operator <<(ostream &stream,mystack s);





};
 ostream &operator <<(ostream &stream,mystack s)
 {


    for(int i=s.top;i>=0;--i)
    cout<<s.arr[i]<<endl;


 }
int main()
{
    mystack s(10);
    for(int i=0;i<8;i++)
    s.push(i);
    cout<<s;
    cout<<"after poping"<<endl;
    for(int i=0;i<3;i++)
    s.pop();
 cout<<s;

 return 0;



}
