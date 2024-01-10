#include<bits/stdc++.h>
using namespace std;

//BETTER  TC - O(2N) , SC - O(N)
// find missing element from sorted array
int findMissingHASH(int arr[],int n){
	//using hashing we will set value of element to 1 and then iterate again and change if there is any elllement value 0
	int hash[n+1]={0};
	for (int i = 0; i < n; ++i)
	{
		hash[arr[i]]=1;
	}
	// numberrs are from 1 to n
	for (int i = 1; i < n+1; ++i)
	{
		if(hash[i]==0){
			return i;
		}
	}
	return -1;
}

// OPTIMAL  TC - O(n)   SC - O(1)
int findMissingSUM(int arr[],int n){
	// array of size 5 will have 1,2,3,4,5 ,so sum of natural numbers = N*(N+1)/2
	// find sum of numbers in given array then subtract it
	int actual_sum = (n*(n+1))/2;
	int arr_sum=0;
	// as 1 ele is missing so n-1
	for (int i = 0; i < n-1; ++i)
	{
		arr_sum=arr_sum+arr[i];
	}
	return actual_sum - arr_sum;
}
// XOR is better than SUM becoz if array size N=10^5 is given then sum of all ~ 10^10 which cant store int integer memeory
// While XOR of all number will not be that big
//OPTIMAL TC - O(n)  SC - O(1)
int findMissingXOR(int arr[],int n){
	int xor1=0,xor2=0;
	for (int i = 0; i < n-1; ++i)
	{
		xor2=xor2^arr[i];
		xor1=xor1^(i+1);
	}
	xor1=xor1^n;
	return xor1^xor2;
}

// Maximum Consecutive Ones
// [1,1,0,1,1,1,0,1,1] -> max conseccutive(back to back) ones is 3
int maxConsecutiveOnes(int arr[], int n){
	int maxi=0;
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==1){
			count++;
			maxi = max(maxi,count);
			// if(count>=maxi){
			// 	maxi=count;
			// }
		}
		else if(arr[i]==0){
			count=0;
		}
	}
	return maxi;
}

// find the number which apprear only once while other appear twice
int findOnceNum(int arr[],int n){
	// better sol - hashing assgn ele to hash array and return number with freq 1 similar to find findMissingHASH
	//hash array size - arr[max element]+1   // O(3n) , SC - O(max_element)
	//but we can't hash array 10^10 size and negative values so use MAP
	//for ordered MAP TC - O(Nlog(N/2+1)) + (n/2+1) Unorder MAP - O(N)  worst(minor) - O(N^2)
	// SC - (N/2+1)

	// XOR all numbers in array twice one will get to 0 and remaining 1 time ele will be returned
	int xor1 = 0;
	for (int i = 0; i < n; ++i)
	{
		xor1 = xor1^arr[i];
	}
	return xor1;
}

int main(){
	// int n = 4;
	// int arr[n]={1,2,3,4};
	// cout<<"Missing element - "<<findMissingXOR(arr,n+1);

	// int n1=8;
	// int arr1[n1]={1,1,0,1,1,1,0,1};
	// cout<<"Max Consecutive one - "<<maxConsecutiveOnes(arr1,n1);

	int n2 = 7;
	int arr[n2] = {1,1,2,2,5,4,4};
	cout<<"Element apprearing once - "<<findOnceNum(arr,n2)<<endl;
	return 0;
}