#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr , int low , int mid , int high){
	vector<int> temp;
	int left = low;
	int right = mid+1;

	while(left <= mid && right <= high){
		//left greater than right
		if(arr[left]<=arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		//right greater than left
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	
	//all the remaining right part
	while(right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	//all the remaining left part
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	//adding to arr
	for (int i = low; i <= high; i++)
	{
		// arr low = arr[0]
		arr[i]=temp[i-low];
	}
}

void mergeSort(vector<int> &arr, int low, int high){
	if(low >= high){
		return ;
	}
	int mid = (low + high)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);

	merge(arr,low,mid,high);
}

int main(){
	cout<<"Array"<<endl;
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(5);
	for (int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	mergeSort(arr,0,4);
	for (int i: arr)
	{
		cout<<i<<" ";
	}
	return 0;
}


//OWN------------------------------------------

// merge(int arr[], int low,int mid, int high){
// 	vector<int> temp;
// 	int i = low;
// 	int j = mid+1;
// 	while(i<=mid && j<=high){
// 		if(arr[i]<=arr[j]){
// 			temp.push_back(arr[i]);
// 			i++;
// 		}
// 		else{
// 			temp.push_back(arr[j]);
// 			j++;
// 		}
// 	}
// 	while(i<=mid){
// 		temp.push_back(arr[i]);
// 		i++;
// 	}
// 	while(j<=high){
// 		temp.push_back(arr[j]);
// 		j++;
// 	}

// 	for (int k = low; k <= high; k++)
// 	{
// 		arr[k]=temp[k-low];
// 	}
// }

// void mergeSort(int arr[],int low , int high){
// 	if(low>=high){
// 		return;
// 	}
// 	int mid = (low+high)/2;
// 	mergeSort(arr,low,mid);
// 	mergeSort(arr,mid+1,high);
// 	merge(arr,low,mid,high);
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
// 	mergeSort(arr,0,n-1);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }