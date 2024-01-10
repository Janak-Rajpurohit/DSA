#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
	int max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

//brute force approach O(2N)
// int secondLargest(int arr[], int n){
// 	int largest = arr[0];
// 	int second_largest = arr[0];
// 	//finding largest
// 	for(int i = 0 ; i<n ; i++){
// 		if (arr[i]>largest)
// 		{
// 			largest=arr[i];
// 		}
// 	}
// 	//finding second largest
// 	for (int i = 0; i < n; i++)
// 	{
// 		if(arr[i]>second_largest && arr[i]<largest){
// 			second_largest=arr[i];
// 		}
// 	}
// 	return second_largest;
// }
//combining the above for loops 
//OPTIMAL SOLUTION - O(N)
int secondLargest(int arr[], int n){
	int largest = arr[0];
	int second_largest = -1;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]>largest){
			second_largest = largest;
			largest=arr[i];
		}
		else if (arr[i]>second_largest && arr[i]<largest)
		{
			second_largest=arr[i];
		}
	}
	return second_largest;
}

//OWN------------------------------------------------
int secLargest(int arr[], int n){
	int largest =arr[0];
	int second_largest;
	for(int i = 0 ; i<n ; i++){
		if(arr[i]>largest){
			second_largest=largest;
			largest=arr[i];
		}
		// ---------------
		else if(arr[i]>second_largest && arr[i]<largest){
			second_largest=arr[i];
		}
	}
	return second_largest;
}

int secondSmallest(int arr[], int n){
	int small = arr[0];
	int second_small = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]<small){
			second_small = small;
			small = arr[i];
		}
		else if(arr[i]>small && arr[i]<second_small){
			second_small = arr[i];
		}
	}
	return second_small;
}

//Check if the arrat is sorted
//pick second element and check for previous one is less then it
//O(N)
bool isSorted(int arr[] , int n){
	for (int i = 1; i < n; ++i)
	{
		if(arr[i-1]>arr[i]){
			return false;
		}
	}
	return true;
}

//Remove duplicate  form sorted array and return no of unique elements
//-------------------------------------------------------------
int removeDuplicates(int arr[], int n){
	int j= 0;
	for (int i = 1; i < n; i++)
	{
		if(arr[j]!=arr[i]){
			arr[j+1] = arr[i];
			j++;
		}
	}
	return j+1;
}

int main(){
	// int arr[5] = {1,7,8,5,5};
	int arr[7] = {1,1,2,2,3,3,4};
	//O(N)
	cout<<"Largest element in arr "<<largestElement(arr,5)<<endl;
	//O(2N)
	cout<<"Second Largest element in arr "<<secLargest(arr,5)<<endl;
	cout<<"Second Smallest element in arr "<<secondSmallest(arr,5)<<endl;

	cout<<"Is arr soreted "<<isSorted(arr,5)<<endl;
	cout<<"arr after removing duplicates "<<removeDup(arr,7)<<endl;
	for (int i = 0; i <7; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}