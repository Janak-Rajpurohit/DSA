#include<bits/stdc++.h>
using namespace std;

// //O(n^2) - worst ,best , average
// int selectionSort(int arr[], int n){
// 	int i,j,min;
// 	for (i = 0; i <= n-2; i++)
// 	{
// 		min = i;
// 		for (j = i; j <= n-1; j++)
// 		{
			
// 			if( arr[j] <= arr[min] ) {
// 				min=j;
// 			}
// 		}
// 		int temp =arr[min];
// 		arr[min]=arr[i];
// 		arr[i] = temp;
// 	}
// }
// //O(n^2) - worst,average , O(1) - best case
// int bubbleSort(int arr[] , int n){
// 	for (int i = n-1; i >=0; i--)
// 	{
// 		int swaps_done=0;
// 		for (int j = 0; j <= i-1; j++)
// 		{
// 			if(arr[j]>arr[j+1]){
// 				int temp = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = temp;
// 				//increment after swaping 
// 				swaps_done++;
// 			}
// 		}
// 		//if not swaps done then break 
// 		if(swaps_done==0){
// 			break;
// 		}
// 	}
// }
// //O(n^2) - worst ,average , O(n) - best
// int insertionSort(int arr[] , int n){
// 	for (int i = 0; i <= n-1; i++)
// 	{
// 		int j = i;
// 		while(j>0 && arr[j]<karr[j-1]){
// 			int temp = arr[j];
// 			arr[j] = arr[j-1];
// 			arr[j-1] = temp;
// 			j--;
// 		}
// 	}
// }

int selectionSort(int arr[],int n){
	int i,j;
	for( i = 0 ; i<n-1 ; i++){
		int min = i;
		for ( j = i; j < n; j++)
		{
			if(arr[j]<=arr[min]){
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

int bubbleSort(int arr[] , int n){
	int swapsDone = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapsDone++;
			}
		}
		if(swapsDone==0){
			cout<<"Array is already sorted"<<endl;
			break;
		}
	}
}

int insertionSort(int arr[] , int n){

	for (int i = 0; i < n; ++i)
	{
		int j = i;
		while(j>0 && arr[j]<arr[j-1]){
			int temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}
}

int main(){
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin>>arr[i];
	}
	cout<<"Array"<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// selectionSort(arr,5);
	// bubbleSort(arr,5);
	insertionSort(arr,5);
	
	for(int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}