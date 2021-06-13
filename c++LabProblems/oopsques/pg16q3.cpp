#include<iostream>
using namespace std;
int main()
{
 try
        {
            throw 'a';


        }
        catch(int n)
        {
        cout<<"caught\n";

        }
       catch(...)
        {
        cout<<"default\n";

        }

return 0;


}
