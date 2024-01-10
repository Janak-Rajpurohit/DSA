#include <bits/stdc++.h>

using namespace std;
// this que also known as rotate image
// rotate matrix by 90 degree

// brute force 
// [i][j] - [j][ (n-1)-i ]
// we create 1 ans matrix for storing val

// optimal transpose the matrix and revese it (swap them dont store them)
vector<vector<int>> rotate_matrix(vector<vector<int>> arr, int n){
	int temp;
	// transpose
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// cout<<arr[i][j]<<" ";
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	// reversing the row
	for (int i = 0; i < n; ++i)
	{
		reverse(arr[i].begin(),arr[i].end());
	}
	return arr;
}

int main(){
	vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
	int n =3;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"--------"<<endl;

	arr = rotate_matrix(arr,n);
	cout<<"--------"<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}