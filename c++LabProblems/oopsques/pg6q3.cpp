#include<iostream>
using namespace std;
class SET
{
    int *arr;
    int elements;
    public:
    SET(int elements)
    {
        this->elements=elements;
        arr=new int[this->elements];

    }
    void get_elements()
    {
        cout<<"enter the elements in the set\n";
        for(int i=0;i<elements;i++)
        {
            cin>>arr[i];
        }



    }
    void display()
    {
        cout<<"displaying the elements\n";
        cout<<"{";
        for(int i=0;i<elements;i++)
        cout<<arr[i]<<",";
        cout<<"}";
        cout<<"\n";
    }
    SET()
    {}
    SET operator +(const SET &o);

    SET operator *(const SET &o);

};
SET SET::operator +(const SET &o)
{
    SET temp;
    int ele;
    int count=0;
    for(int i=0;i<elements;i++)
    {
        for(int j=0;j<o.elements;j++)
        {
            if(arr[i]==o.arr[j])
            count++;
        }


    }
    ele=elements+o.elements-count;
        temp.elements=ele;
        int k;
        temp.arr=new int[temp.elements];
        for(k=0;k<elements;k++)
            temp.arr[k]=arr[k];
            int flag;
            for(int j=0;j<o.elements;j++)
            {
                flag=0;
                for(int i=0;i<elements;i++)
                {
                    if(arr[i]==o.arr[j])
                    {
                        flag=1;
                    }

                }
                if(flag!=1)
                {
                    temp.arr[k]=o.arr[j];

                    k++;
                }
            }
            return temp;

}
SET SET::operator *(const SET &o)
{
    SET temp;
    int ele=0;
    for(int j=0;j<o.elements;j++)
            {

                for(int i=0;i<elements;i++)
                {
                    if(arr[i]==o.arr[j])
                    {
                                ele++;
                    }

                }

            }
    temp.elements=ele;
    temp.arr=new int[temp.elements];
    int m=0;
    for(int j=0;j<o.elements;j++)
            {

                for(int i=0;i<elements;i++)
                {
                    if(arr[i]==o.arr[j])
                    {
                            temp.arr[m]=arr[i];
                            m++;
                    }

                }

            }
    return temp;
}
int main()
{
    SET s1(3),s2(5);

    s1.get_elements();
    s1.display();
    s2.get_elements();
    s2.display();
SET s3=s1+s2;
s3.display();
SET s4=s1*s2;
s4.display();
return 0;


}
