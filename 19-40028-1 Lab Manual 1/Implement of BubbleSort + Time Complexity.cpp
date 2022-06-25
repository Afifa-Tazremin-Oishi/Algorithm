#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int operate = 0;


    int a[20],size,i,j,temp,swap;
    cout<<"Enter the size of array  ";
    operate++;
    cin>>size;
    cout<<"Enter the array elements  ";

    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for (i=0;i<(size-1);i++){
          operate = operate+2;

        swap = 0;

        for(j=0;j<(size-i)-1;j++){
                  operate = operate+2;
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = 3;
                operate = operate+3;

            }
        }

        if(swap ==0){
            break;

        }
    }
    cout<<"After bubble sort : "<<endl;

    for(i =0;i<size;i++){
              operate = operate+2;

        cout<<"  "<<a[i];
    }
    cout<<endl;
    cout<<"Time complexity  "<<operate;
    getch();

    return 0;
}

