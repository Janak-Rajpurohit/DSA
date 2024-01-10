#include<bits/stdc++.h>

using namespace std;

// if matrix has 0 then change it row and col to 0

// better
vector<vector<int>> zero_matrix(vector<vector<int>> arr, int n){
	int row[n] = {0};
	int col[n] = {0};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(arr[i][j]==0){
				row[i] = 1;
				col[j] = 1;
			}	
		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(row[i]==1 || col[j]==1){
				arr[i][j]=0;
			}
		}
	}
	return arr;
}

// OPTIMAL - TC (2*N*N) , extra space of 1 var col0
// vector<vector<int>> zero_matrix_opt(vector<vector<int>> arr, int n){
// 	// int col[n] = {0}  - > matrix[0][..]
// 	// int row[n] = {0}  - > matrix[..][0]
// 	int col0=1;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if(arr[i][j]==0){
// 				// i th row mark it to zero
// 				arr[i][0]=0;
// 				//j th col mark it to 0 (not first col it is store in col0)
// 				if(j!=0)
// 					arr[0][j]=0;
// 				else
// 					col0 = 0;
// 			}
// 		}
// 	}
// 	for (int i = 1; i < n; ++i)
// 	{
// 		for (int j = 1; j < n; ++j)
// 		{
// 			if(arr[i][j]!=0){
// 				// check for col and row array if mark as zero then change 1 to 0
// 				if(arr[0][j]==0 || arr[i][0]==0){
// 					arr[i][j]=0;
// 				}
// 			}
// 		}
// 	}
// 	// 0 th row
// 	if(arr[0][0]==0){
// 		for (int i = 0; i < n; ++i)
// 		{
// 			arr[0][i]=0;
// 		}
// 	}
// 	// 0th col
// 	if(col0 == 0){
// 		for (int i = 0; i < n; ++i)
// 		{
// 			arr[i][0]=0;
// 		}
// 	}
// 	return arr;
// }

vector<vector<int>> zero_matrix_opt(vector<vector<int>> arr, int n){
	int col0 =1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(arr[i][j]==0){
				arr[i][0]=0;
				if(j==0){
					col0 = 0;
				}
				else{
					arr[0][j]=0;
				}
			}
		}
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if(arr[i][0]==0 || arr[0][j]==0){
				arr[i][j]=0;
			}
		}
	}

	if(arr[0][0]==0){
		for (int i = 0; i < n; ++i)
		{
			arr[0][i]=0;
		}		
	}
	if(col0==0){
		for (int i = 0; i < n; ++i)
		{
			arr[i][0]=0;
		}
	}
	return arr;
}

int main(){
	vector<vector<int>> arr = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
	cout<<"Matrix"<<endl;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	arr = zero_matrix_opt(arr,4);
	cout<<"-------------"<<endl;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}