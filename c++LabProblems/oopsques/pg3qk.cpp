//output: iam in some fun
// 0

#include<iostream>

using namespace std;
class sample
{
  public :
  int *ptr;
  sample(int i)
  {
    ptr=new int(i);
  }
    ~sample()
    {
     //   cout<<"destructercalled\n";
        delete ptr;
    }
void print()
{
    cout<<*ptr;
}

};
void somefunc(sample x)
{
    cout<<"say iam in some func\n";
}
int main()
{
    sample s1=10;

    somefunc(s1);
    s1.print();
    return 0;


}
