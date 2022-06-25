#include <iostream>
using namespace std;

void countingSort(int arr[],int n,int RANGE){
    int count[RANGE]={0};
    int i;
    int out[n];
    int operate = 0;

    operate = operate +2;
    for(i=0;i<n;i++)

    ++count[arr[i]];
     operate = operate +2;
    for(i=1;i<RANGE;i++)
    count[i]+=count[i-1];


     operate = operate +2;
    for(i=n-1;i>=0;i--){
        out[count[arr[i]]-1]=arr[i];
        --count[arr[i]];
    }
     operate = operate +2;
    for(i=0;i<n;i++)
    arr[i]=out[i];



}
void print(int arr[],int n){
    int operate = 0;
    operate = operate +2;
    for(int i=n-1;i>=0;i--)
    cout<<arr[i]<<' ';
    cout<<endl;
}

int main() {

	int arr[]={9,3,8,7,4,10,9};
	int n=7;
	int RANGE=11;
	int operate = operate + operate;

	print(arr,n);
	operate ++;

	countingSort(arr,n,RANGE);

    print(arr,n);
    operate++;

     cout<<"Time complexity : "<<operate;
	return 0;
}
