#include<iostream>
using namespace std;
int count=0;
class orange
{
  public :
  orange func(orange o)
  {
  orange w=o;
    return w;
  }
    orange(const orange &x)
    {
    count++;

    }
    orange()
    {}

};
int main()
{
    orange x;
      cout<<count<<"\n";

    orange y=y.func(x);
      cout<<count<<"\n";

    orange z=z.func(y);
      cout<<count<<"\n";

    y=z;
    cout<<count;

}
