#include<iostream>
using namespace std;
#include<conio.h>

void linearsearch(int a[], int n, int data)
{
   // int i=0, n, data, index;
    int i, index;

    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
           index=i;
           cout<<"Element is found: "<<endl;

            break;
        }
    }
    if(i==n)
    {
        cout<<"Element is not found"<<endl;

    }

}
int main()
{
    int i, n, data;
    int a[i];

    cout<<"Enter the element number: "<<endl;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"which element do you want to search: "<<endl;
    cin>>data;
    linearsearch(a,n,data);
}
