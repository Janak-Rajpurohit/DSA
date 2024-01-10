#include<bits/stdc++.h>

using namespace std;

// array will given with integers, find the next permutation of array
// 123
// 132
// 213
// 231
// 312
// 321
// so this the permutation if array given is 213 then next permutaion is 231
// if array given is 321 then fall back to first permutation and return it

// BRUTE FORCE TC - O(N!xN)
// gen all permutations
// find the given array permutation 
// return next permutation

// BETTER
// use stl lib next_permutation

//OPTIMAL - impleament next_permutation
// vector<int> nextPermutation(vector<int> arr){
// 	int n = arr.size();

// 	int ind = -1;   //storing the break point index
// 	// longest prefix match finding the break point
// 	for (int i = n-2; i >=0; i--)
// 	{
// 		if(arr[i]<arr[i+1]){
// 			ind = i;
// 		}
		
// 	}
// 	if(ind == -1){
// 		reverse(arr.begin(),arr.end());
// 		return arr;
// 	}
// 	// finding number >arr[ind] and smaller then others and  swaping 
// 	int replace=arr[n-1];
// 	for (int i = n-1; i >ind ; i--)
// 	{	
// 		if(arr[i]>arr[ind]){
// 			swap(arr[ind],arr[i]);
// 			break;
// 		}
// 	}	

// 	// reversing remaining part of array
// 	reverse(arr.begin()+ind+1,arr.end());
// 	return arr;
// }

vector<int> nextPermutation(vector<int> arr){
	int n = arr.size();

	int breakind;
	for (int i = n-2; i >=0 ; i--)
	{
		if(arr[i]<arr[i+1]){
			breakind = i;
		}
	}

	if(breakind ==  -1) {
		reverse(arr.begin(),arr.end());
		return arr;
	}

	for (int i = n-1; i > breakind; i--)
	{
		if(arr[i]>arr[breakind]){
			int temp = arr[i];
			arr[i] =  arr[breakind];
			arr[breakind] = temp;
			break;
		}
	}
	reverse(arr.begin()+breakind+1,arr.end());
	return arr;
}

int main(){
	// break point between 3 and 4 
	// vector<int> arr={2,1,5,4,3,0,0};
	vector<int> arr={2,3,1};
	arr = nextPermutation(arr);
	for (int i = 0; i < arr.size(); ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}