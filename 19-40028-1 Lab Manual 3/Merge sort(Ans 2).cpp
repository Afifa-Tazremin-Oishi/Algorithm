#include<iostream>
using namespace std;

void sort(int arr[], int start, int mid, int end){
	int i=start;
	int j=mid+1;
	int k=start;
	int newArr[end+1];
	

	while(i<=mid && j<=end){
		if(arr[i]<=arr[j]){
			newArr[k]=arr[i];
			i++;
			k++;
		}

		else{
			newArr[k]=arr[j];
			j++;
			k++;
		}

	}
	while(i<=mid){
		newArr[k]=arr[i];
		i++;
		k++;
			
	}

	while(j<=end){
		newArr[k]=arr[j];
		j++;
		k++;
		
	}

	for(int i=start;i<k;i++){
		arr[i]=newArr[i];
	}
}

void mergeSort(int arr[], int start, int end){
	if(start>=end)
		return;

	int mid=(start+end)/2;

	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	sort(arr,start,mid,end);
}

void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	int arr[100];
	cout<<"Enter the size of your input ";
	cin>>n;
	cout<<"Enter your number ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);                                                      
	print(arr,n);
	
}
