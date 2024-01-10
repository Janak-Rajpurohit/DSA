#include<bits/stdc++.h>
using namespace std;

// find element d which appears >n/2 times where n is size of array
// eg n=4 then element should appear 4/2=2 times 
// BETTER, TC - O(NlogN), SC - O(N),   
// for unorder map - TC - O(N),  minor and worse case O(NxN) 
int findMajorityHASH(int arr[],int n){
	map<int,int> mpp;
	for (int i = 0; i < n; ++i)
	{
		mpp[arr[i]]++;
	}
	for (auto it: mpp)
	{
		if(it.second>(n/2)){
			return it.first;
		}
	}
	return -1;
}

// OPTIMAL
// TC - O(N)+O(N) (OPTIONAL),  SC - O(N)
int findMajority(int arr[],int n){
	int ele = arr[0];
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==ele){
			count++;
		}
		// if current ele is not = to ele then decrease count
		else{
			count--;
		}
		// when count is 0 then reset the ele to new ele
		if(count==0){
			// counting that new ele and assgn to ele var
			count=1;
			ele=arr[i];
		}
	}
	// now we have got the mojority element,counting the appearence of ele we got
	//THIS DEPENDS ON QUESTION IF ARRAY MAY NOT HAVE MAJORITY ELE THEN WE HAVE TO CHECK
	count=0;
	for (int i = 0; i < n; ++i)
	{
		if(ele==arr[i]){
			count++;
		}
	}
	// we will check if its count is more than n/2
	if(count>n/2){
		return ele;
	}
	else{
		return -1;
	}
}


// OWN  ----------------------------------
int fun(int arr[],int n){
	int ans;
	int count =0;
	for (int i = 0; i < n; ++i)
	{
		if(count==0){
			ans = arr[i];
			count=1;
		}
		if(arr[i]==ans){
			count++;
		}
		else{
			count--;
		}
	}

	count=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==ans){
			count++;
		}
	}

	if(count>n/2) return ans;
	else return -1;
}

int main(){
	// int n=7;
	// int arr[n] = {1,2,2,3,4,2,2};
	// cout<<"Element appeared most - "<<findMajorityHASH(arr,n)<<endl;
	int n = 16;
	int arr[n] = {7,7,1,7,5,2,7,7,7,7,7,7,2,2,5,1};
	cout<<"Element appeared most - "<<fun(arr,n)<<endl;
	return 0;
}