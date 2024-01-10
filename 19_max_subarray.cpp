#include<bits/stdc++.h>
using namespace std;

// KADANE'S ALGO
// TC - O(N) , SC(1)
// int maxOfSubarray(int arr[],int n){
// 	long long sum=0;
// 	long long maxi = LONG_MIN;
// 	int ansstart=-1;
// 	int ansend=-1;
// 	int start=0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		//when sum is 0 there is start of new subarray
// 		if(sum==0){
// 			start=i;
// 		}
// 		sum=sum+arr[i];

// 		if(sum>maxi){
// 			maxi=sum;
// 			//updating the pointer
// 			ansstart=start;
// 			ansend = i;
// 		}
// 		if(sum<0){
// 			sum=0;
// 		}
// 	}
// 	cout<<ansstart<<" "<<ansend<<endl;
// 	// if the max sum is negative we can consisder the empty sub array which has sum 0 i.e.. > negative sum
// 	if(maxi<0){
// 		return 0;
// 	}
// 	else{
// 		return  maxi;
// 	}
// }




int maxOfSubarray(int arr[],int n){
	int sum = 0;
	int maxi = INT_MIN;
	int ansstart=-1;
	int ansend=-1;
	int start =0;

	for (int i = 0; i < n; ++i)
	{
		sum = sum+arr[i];
		if(sum>maxi){
			maxi = sum;
			ansstart = start;
			ansend = i;
		}
		if(sum<0){
			sum=0;
			start=i;
		}
	}
	cout<<"start - "<<ansstart<<" end"<<ansend<<endl;
	if(maxi<0) return 0;
	else return maxi;
}
int main(){
	int n = 8;
	int arr[n] = {-2,-3,4,-1,-2,1,5,-3};
	// int arr[n] = {-1,-2,-5,-4,-3,-1,1,-4};
	cout<<"Max sum of subarray "<<maxOfSubarray(arr,n)<<endl;
	return 0;
}