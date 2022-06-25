
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{

    int a[20],size,i,j,temp,swap;
    cout<<"Enter the size of array  ";
    cin>>size;
    cout<<"Enter the array elements  ";

    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for (i=0;i<(size-1);i++){

        swap = 0;

        for(j=0;j<(size-i)-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = 1;
            }
        }

        if(swap ==0){
            break;

        }
    }
    cout<<"After bubble sort : ";

    for(i =0;i<size;i++){

        cout<<"  "<<a[i];
    }
    getch();
    return 0;
}
