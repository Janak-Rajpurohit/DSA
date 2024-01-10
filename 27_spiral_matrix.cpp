#include<bits/stdc++.h>

using namespace std;

// TC - O(N*N) , Sc -O(N) store number in array(ans) not printing and returning the array
void print_matrix_spiral(vector<vector<int>> arr,int n){
	int left = 0;
	int right = n-1;
	int top = 0;
	int bottom = n-1;
	for (int i = 0; i <= n-2; ++i)
	{
		if(top==bottom && left==right){
			cout<<arr[top][bottom]<<".";
			break;
		}
		// left to right
		for (int i = left; i <= right; ++i)
		{
			cout<<arr[top][i]<<" ";
		}
		top++;
		// cout<<"--";

		// top to bottom
		for (int i = top; i <= bottom; ++i)
		{
			cout<<arr[i][right]<<" ";
		}
		right--;
		// cout<<"--";

		// right to left
		for (int i = right; i >=left; i--)
		{
			cout<<arr[bottom][i]<<" "; 
		}
		bottom--;
		// cout<<"--";

		// bottom to top
		for (int i = bottom; i >=top; i--)
		{
			cout<<arr[i][left]<<" "; 
		}
		left++;
		// cout<<"--";

	}
}

void print_matrix_spiral_striver(vector<vector<int>> arr,int n){
	int left = 0;
	int right = n-1;
	int top = 0;
	int bottom = n-1;
	while(top<=bottom && left<=right)
	{
		// left to right
		for (int i = left; i <= right; ++i)
		{
			cout<<arr[top][i]<<" ";
		}
		top++;
		// cout<<"--";

		// top to bottom
		for (int i = top; i <= bottom; ++i)
		{
			cout<<arr[i][right]<<" ";
		}
		right--;
		// cout<<"--";

		// top  and right has been increamented so checking again
		if(top<=bottom){
			// right to left
			for (int i = right; i >=left; i--)
			{
				cout<<arr[bottom][i]<<" "; 
			}
			bottom--;
			// cout<<"--";
		}

		if(left<=right){
			// bottom to top
			for (int i = bottom; i >=top; i--)
			{
				cout<<arr[i][left]<<" "; 
			}
			left++;
			// cout<<"--";
		}

	}
}
int main(){
	vector<vector<int>> arr = { {1,2,3,4,5},
								{6,7,8,9,10},
								{11,12,13,14,15},
								{16,17,18,19,20},
								{21,22,23,24,25}};
	int n =5;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"--------"<<endl;
	print_matrix_spiral(arr,n);
	print_matrix_spiral_striver(arr,n);
	return 0;
}