#include <iostream>
#include<conio.h>
using namespace std;

void linearsearch(int a[],int n,int item)
{
    int operate = 0;
    int i,c=0,index;
    operate++;
    for(i=0;i<n;i++)


    {   operate = operate+2;
        if(a[i]==item)
        {
            operate++;
            c=1;
            index=i;
            break;
        }
    }
        if(c==1)

        {

            cout<<"Found in index: "<<index<<endl;
            operate++;
        }
        else
        {
            cout<<"Not found"<<endl;
        }

}

int main()
{
    int i,n,item;
    int operate = 0;

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
         operate = operate +2;
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl<<endl;
    cout<<"Enter which item do you searching :  "<<endl;
    cin>>item;
    linearsearch(a,n,item);

    int max = a[0];

    for(int m=0;m<n;m++){


            operate = operate +2;
        if (a[m]>max){


            max = a[m];
        }
         operate = operate +2;
    }
    cout<<endl;
    cout<<"Maximum number : "<<max<<endl;
    operate++;
    cout<<"Time complexity "<<operate;
    operate++;
    getch();
}


