#include<bits/stdc++.h>

using namespace std;

// everthin on the right of number is smaller then it is leader
// {10,22,12,3,0,6}  -> leaders = {22,12,6}, last ele is always leader

// TC- O(n) , SC - O(N)- worst case [5,4,3,2,1]
// OWN---------------------------------------------------------
// vector<int> leaders(vector<int> arr){
// 	int n = arr.size();
// 	// last ele is always leader
// 	vector<int> ans={arr[n-1]};

// 	for (int i = n-2; i >=0 ; i--)
// 	{

// 		if(arr[i]>*(ans.end()-1)){
// 			ans.push_back(arr[i]);
// 		}
// 	}
// 	return ans;
// 	// if question say to give in {22,12,6} order the reverse/sort it and return 
// }

vector<int> leaders(vector<int> arr){
	int n = arr.size();
	vector<int> ans = {arr[n-1]};

	for (int i = n-2; i >=0; i--)
	{
		if(arr[i]>*(ans.end()-1)){
			ans.push_back(arr[i]);
		}
	}
	return ans;
}

int main(){
	vector<int> arr = {10,22,12,3,0,6};
	arr = leaders(arr);
	for (int i = 0; i < arr.size(); ++i)
	 {
	 	cout<<arr[i]<<" ";
	 } 
	return 0;
}