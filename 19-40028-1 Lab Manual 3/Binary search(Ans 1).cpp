
#include<iostream>
using namespace std;
int main()
{

    int n,i,arr[50],data,first,last,middle;
    cout<<"Enter total number of elements: ";
    cin>>n;
    cout<<"Enter elements: " ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number to find: ";
    cin>>data;
    first=0;
    last=n-1;
    middle=(first+last)/2;

    for(int j=first;j<middle;j++)
    {
        cout<<" "<<arr[j];
    }
    cout<<endl;
    while(first<=last)
    {
        if(arr[middle]<data)
        {
           first=middle+1;
        }
        else if(arr[middle]==data)
        {
            cout<<data<<" fount at position "<<middle+1<<"\n";
            break;
        }
        else
        {
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if (first>last)
    {
        cout<<"Not found!!"<<data<<" is not present in the list.";
    }

   return 0;
}
