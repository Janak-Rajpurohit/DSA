#include<bits/stdc++.h>
using namespace std;

//rotate array from left by 1
int rotateLeftByOne(int arr[], int n){
	int temp=arr[0];
	for (int i = 1; i <n ; i++)
	{
		arr[i-1]=arr[i];	
	}
	arr[n-1]=temp;
}

//rotate array from left by D places
//BRUTE FORCE 
int rotateLeftByD(int arr[], int n, int d){
	d = d%n;
	int temp[n];
	for (int i = 0; i < d; ++i)
	{
		temp[i]=arr[i];
	}
	for (int i = d; i <n ; i++)
	{
		arr[i-d]=arr[i];	
	}
	// int j=0;
	for(int i = n-d ;i<n ;i++){
		// arr[i]=temp[j];
		// j++;
		arr[i] = temp[i-(n-d)];
	}
}

//OPTIMAL 
int rotateLeft_D(int arr[], int n, int d){
	int temp;

	// reverse 0 to  d
	for (int i = 0; i < d/2; ++i)
	{
		temp = arr[i];
		arr[i] = arr[d-1-i];
		arr[d-1-i] = temp;
	}
	// reverse d+1 to n 
	for (int i = d; i < (n+d)/2; ++i)
	{
		temp = arr[i];
		arr[i] = arr[n-i+d-1];
		arr[n-i+d-1] = temp;
	}
	 // reverse 0 to n whole array
	for (int i = 0; i < n/2; ++i)
	{
		temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
	// we can use reverse function
	// reverse(arr,arr+n);
}

//moving all zeros to front in array
//OWN------------------------------------
int zeroToFront(int arr[] , int n){
	int j=0;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		if(arr[j]!=0){
			j++;
		}
		else{
			if(arr[i]!=0){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				j++;
			}
		}
	}
}

int linearSearch(int arr[],int n,int num){
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}

//give union of two sorted array
//OWN--------------------------------------------------
// O(n1+n2) worst case all elements are unique SC = O(n1+n2) for returning arr no extra space
vector<int> unionArray(int arr1[],int n1, int arr2[], int n2){
	cout<<"Start"<<endl;
	int i=0;
	int j=0;
	vector<int> union_arr;
	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
			// vecotr.back() does nothin if its empty so if we are adding number for firste let it add
			if(union_arr.size()==0 || union_arr.back() != arr1[i]){
				union_arr.push_back(arr1[i]);
			}
			i++;
		}
		else{
			if(union_arr.size()==0 || union_arr.back()!=arr2[j]){
				union_arr.push_back(arr2[j]);
			}
			j++;
		}
	}
	while(i<n1){
		if(union_arr.back() != arr1[i]){
			union_arr.push_back(arr1[i]);
		}
		i++;
	}
	while(j<n2){
		if(union_arr.back() != arr2[j]){
			union_arr.push_back(arr2[j]);
		}
		j++;
	}
	return union_arr;
}

//OWN---------------------------------------
//worst case - O(n1+n2)   SC = O(1)
vector<int> intersectionArray(int arr1[],int n1, int arr2[], int n2){
	cout<<"Start"<<endl;
	int i=0;
	int j=0;
	vector<int> intersection_arr;
	while(i<n1 && j<n2){
		if(arr1[i]==arr2[j]){
			// vecotr.back() does nothin if its empty so if we are adding number for firste let it add
			intersection_arr.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j] && arr1[i]!=arr2[j]){
			i++;
		}
		else if(arr1[i]>arr2[j] && arr1[i]!=arr2[j]){
			j++;
		}
	}
	return intersection_arr;
}

int main(){
	// int n=10;
	// int arr[n] = {1,2,3,4,5,6,7};
	// int arr[n] = {1,0,1,3,4,0,0,5,9};
	// for (int i = 0; i <n ; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// rotateLeftByOne(arr,n);
	// rotateLeftByD(arr,n,2);
	// rotateLeft_D(arr,n,3);

	// zeroToFront(arr,n);
	
	// cout<<"Index of 4 - "<<linearSearch(arr,n,4)<<endl;
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }


	int n1=6;
	int arr1[n1] = {1,1,2,2,3,4};
	int n2=5;
	int arr2[n2] = {1,2,2,2,4};
	
	// cout<<"Union array"<<endl;
	// vector<int> union_arr = unionArray(arr1,6,arr2,5);
	cout<<"Intersection Array"<<endl;
	vector<int> intersection_arr = intersectionArray(arr1,6,arr2,5);
	for (vector<int>::iterator i = intersection_arr.begin(); i != intersection_arr.end(); ++i)
	{
		cout<<*i<<" ";
	}
	return 0;
}