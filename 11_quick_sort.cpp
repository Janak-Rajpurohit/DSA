#include<bits/stdc++.h>
using namespace std;

int quickSort(int arr[] , int low , int high){
	int pivot = arr[low];
	int i=low;
	int j = high;
	while(i<j){
		// i will point to right till we get num > pivot
		while(arr[i]<=pivot && i<=high-1){
			i++;
		}
		// j will point to right till we get num < pivot
		while(arr[j]>pivot && j>=low+1){
			j--;
		}
		// swap if i not crossed j
		if(i<j){
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	// after j cross i pivot is placed to it's corect place
	int temp = arr[j];
	arr[j] = arr[low]; 
 arr[low] = temp;
	// returning partition index
	return j;
}

void qs(int arr[],int low,int high){
	if(low<high){
		int partition = quickSort(arr,low,high);
		qs(arr, low, partition-1);       // left part
		qs(arr, partition+1, high);	     // right part
	}
}
int main(){
	int arr[5] = {3,2,5,1,4};
	for (int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	qs(arr,0,4);
	for (int i: arr)
	{
		cout<<i<<" ";
	}
	return 0;
}


// OWN ---------------------------left<=high-1 / right>=low+1, puting pivot to correct position
// int divide(int arr[], int low,int high){
// 	int pivot=arr[low];
// 	int left = low;
// 	int right = high;
// 	while(left<right){
// 		while(arr[left]<pivot && left<=high-1){
// 			left++;
// 		}
// 		while(arr[right]>pivot && right>=low+1){
// 			right--;
// 		}
// 		if(left<right){
// 			int temp = arr[left];
// 			arr[left] = arr[right];
// 			arr[right] = temp;
// 		}
// 	}
// 	//puting pivot in position
// 	int temp = pivot;
// 	pivot = arr[right];
// 	arr[right] = temp;
// 	 return right; 
// }

// void quickSort(int arr[], int low, int high){
// 	if(low>=high){
// 		return;
// 	}
// 	int partition = divide(arr,low,high);
// 	quickSort(arr,low,partition);
// 	quickSort(arr,partition+1,high);
// }

// int main(){
// 	int n = 5;
// 	int arr[n] = {2,3,1,5,4};
// 	cout<<"Array"<<endl;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// 	quickSort(arr,0,n-1);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }