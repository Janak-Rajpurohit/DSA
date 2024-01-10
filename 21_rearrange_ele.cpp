#include<bits/stdc++.h>

using namespace std;


// array with equal no of + and - numbers is given arrang ethem in + - + - + - order
// vector<int> rearrangeArray(vector<int> arr){
// 	int n = arr.size();
// 	int pos=0;   //for positive ele index
// 	int neg = 1; // for negative ele index
// 	vector<int> ans(n,0);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if(arr[i]>0){
// 			ans[pos]=arr[i];
// 			pos=pos+2;
//  		}
// 		else if(arr[i]<0){
// 			ans[neg]=arr[i];
// 			neg = neg+2;
// 		}
// 	}
// 	return ans;
// }


// DIFFERENT TYPE HERE WE DONT HAVE EQUAL NUMBER OF + AND - NUMBERS 
// IF EXTRA NUMBERS ARE THERE THEN ADD THEM AS IT IS WITHOUT ALTERING THE ORDER
// TC- O(N+N/2) , SC - O(N); 
// vector<int> rearrangeArrayNotEq(vector<int> arr){
// 	int n = arr.size();
// 	vector<int> pos;
// 	vector<int> neg;
// 	// adding + and - ele to pos and neg vector
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if(arr[i]>0){
// 			pos.push_back(arr[i]);
// 		}
// 		else{
// 			neg.push_back(arr[i]);
// 		}
// 	}
// 	//adding to array  
// 	int m = min(pos.size(),neg.size()); 
// 	for (int i = 0; i <m; ++i)
// 	{
// 		arr[2*i] = pos[i];
// 		arr[2*i+1] = neg[i];
// 	}
// 	// adding remaining ele
// 	int k = max(pos.size(),neg.size()); 
// 	for (int i = m; i <k ; ++i)
// 	{
// 		arr.push_back(pos[i]);
// 	}
// 	return arr;
// }

vector<int> rearrangeArrayNotEq(vector<int> arr){
	int n = arr.size();

	vector<int> pos;
	vector<int> neg;

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]<0){
			neg.push_back(arr[i]);
		}
		else{
			pos.push_back(arr[i]);
		}
	}

	int m = min(pos.size(),neg.size());
	for (int i = 0; i < m; ++i)
	{
		arr[2*i] = pos[i];
		arr[2*i+1] = neg[i];
	}

	if(pos.size()>neg.size()){
		for (int i = m; i < pos.size(); ++i)
		{
			arr[m+i] = pos[i];
		}
	}
	else{
		for (int i = m; i < neg.size(); ++i)
		{
			arr[m+i] = neg[i];
		}
	}
	return arr;
}


int main(){
	// int n = 6;
	// vector<int> arr = {3,1,-2,-5,2,-4};
	// arr = rearrangeArray(arr);

	// int n = 8;
	// vector<int> arr = {3,1,-2,-5,2,4,8,6};
	vector<int> arr = {-3,1,-2,-5,2,-4,-8,6};
	arr = rearrangeArrayNotEq(arr);
	int n = arr.size();
	for (int i = 0; i < 8; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}