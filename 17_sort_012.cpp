#include<bits/stdc++.h>
using namespace std;


// DUTCH NATIONAL FLAG
// TC - O(N) , SC - O(1)
// int sort012(int arr[],int n){
// 	int low = 0;
// 	int mid = 0;
// 	int high = n-1;
// 	while(mid<=high){
// 		if(arr[mid]==0){
// 			int temp=arr[mid];
// 			arr[mid]=arr[low];
// 			arr[low]=temp;
// 			mid++;
// 			low++;
// 		}
// 		else if(arr[mid]==1){
// 			mid++;
// 		}
// 		else if(arr[mid]==2){
// 			int temp=arr[mid];
// 			arr[mid]=arr[high];
// 			arr[high]=temp;
// 			high--;
// 		}
// 	}
// }

// // own----------------------------

int sort012(int arr[],int n){
	int low =0;
	int high =n-1; 
	int mid = 0;

	while(mid<=high){

		if(arr[mid]==0){
			int temp = arr[mid];
			arr[mid] = arr[low];
			arr[low] = temp;
			low++;
		}
		if(arr[mid]==1){
			mid++;
		}
		if(arr[mid]==2){
			int temp = arr[mid];
			arr[mid] = arr[high];
			arr[high] = temp;
			high--;
		}
	}
}

int main(){
	int n = 10;
	int arr[n] = {0,1,1,0,2,1,2,2,0,2};
	sort012(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}