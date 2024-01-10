#include<bits/stdc++.h>

using namespace std;
// find two numbers in array whosse sum is = 14
// we can nested loop through each every element and check sum TC ~ O(NxN)

// we use map and store elements in it
// then iterate through array and check (target - i) exsist in map
// if it exsist return both index 
// TC - O(NlogN), unorder map O(N) , minor worst case O(NxN)
// Adding every elem in map so - SC - O(N)
vector<int> twoSumHashing(vector<int> a, int k){
	map<int,int> mpp;
	int n = a.size();
	for (int i = 0; i < n; ++i)
	{
		mpp[a[i]]=i;
		int sec = k-a[i];
		if(mpp.find(sec) != mpp.end()){
			return {mpp[sec],i};
		}
	}
	return {-1,-1};
}

// SLIGHTLY BETTER APPROACH For return  "Yes" "No" sol
// sort the array after puting it into a map , so that index are not lost , we have to return the index but it willbe not a optimal  sol
// left pointer at 0 and right pointer at last index
// check a[left] + a[right] == target, if answer < target increse left pointer else decrease right pointer
// TC - O(N)+O(NlogN), SC - O(1), if u take into account the array we sorted/changed then O(N)
// vector<int> twoSum2pointer(vector<int> a, int k){
// 	int n= a.size();
// 	int left=0, right=n-1;
// 	int sum=0;
// 	sort(a.begin(),a.end());
// 	while(left<right){
// 		sum=a[left]+a[right];

// 		if(sum==k){
// 			return {left,right};
// 		}
// 		else if(sum<k){
// 			left++;
// 		}
// 		else if(sum>k){
// 			right--;
// 		}
// 	}
// 	return {-1,-1};
// }

vector<int> twoSum2pointer(vector<int> a,int k){
	int n = a.size();
	int sum=0;
	map<int,int> mpp;
	for (int i = 0; i < n; ++i)
	{
		mpp[a[i]]=i;
	}
	sort(a.begin(),a.end());
	int left = 0;
	int right = n-1;
	while(left<right){
		sum = a[left]+a[right];
		if(sum==k){
			return {mpp[a[left]],mpp[a[right]]};     //accessing the number index stored in map mpp(number->index)
		}
		if(sum>k){
			left++;
		}
		else{
			right--;
		}
		left++;
	}
	return {-1,-1};
}

vector<int> fun(vector<int> arr, int k){
	int n = arr.size();
	int left = 0;
	int right = n-1;
	int sum = 0;

	map<int,int> index;
	for (int i = 0; i < n; ++i)
	{
		index[arr[i]]=i;
	}

	sort(arr.begin(),arr.end());
	while(left<=right){
		sum = arr[left] + arr[right];

		if(sum == k){
			return {index[arr[left]],index[arr[right]]};
		}
		else if(sum>k){
			right--;
		}
		else{
			left++;
		}
	}
	return {-1,-1};
}

int main(){
	vector<int> a;
	a.push_back(7);
	a.push_back(11);
	a.push_back(2);
	a.push_back(8);
	a.push_back(6);
	// vector<int> pt = twoSumHashing(a,14);
	// cout<<"Indexes - "<<pt[0]<<" "<<pt[1]<<endl;

	// vector<int> pt = twoSum2pointer(a,14);
	vector<int> pt = fun(a,10);
	cout<<"Indexes - "<<pt[0]<<" "<<pt[1]<<endl;
	return 0;
}