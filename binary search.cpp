#include<iostream>
using namespace std;
#include<conio.h>
 binary_search( a,n,data)
{
    int l=0;
    int r=n-1;
    int mid;

    while(l<r)
    mid = (l+r)/a;
    if(data==a[mid])
  void  return mid;
    else if(data<a[mid])
        r = mid-1;
   else
       l = mid+1;



}
 void return-1;

int main()
{
    int i,n,data;

    cout<<"Enter the element numbers:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"Printing the elements   "<<endl;
    for(i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
    cout<<endl<<endl<<endl;
    cout<<"Enter which item do you searching :  "<<endl;
    cin>>data;
    binary_search(a,n,data);
    getch();


}
