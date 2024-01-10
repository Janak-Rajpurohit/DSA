#include<bits/stdc++.h>

using namespace std;


//sum of first n numbers using parameters
int sumParameter(int i , int sum=0);
int sumParameter(int i,int sum){
	if(i<1) return sum;
	sumParameter(i-1,sum+i);  // parametrised function 
}

//sum of first n numbers through functional
int sumFunctional(int i){
	if(i == 0) return 0;
	else return i + sumFunctional(i-1);
}

//factorial of n numbers using functional
int factParameter(int n, int fact=1);
int factParameter(int n,int fact){
	if(n == 1) return fact;
	else{
		return factParameter(n-1,n*fact);
	}
}

//factorial of n numbers using functional
int factFunctional(int n){
	if(n==1) return 1;
	else return n*factFunctional(n-1);
}

// int reverse (int arr[] , l=0);
// int* reverse(int arr[],int l,int h){
// 	if (l==h) return arr;
// 	int temp = arr[l];
// 	arr[l]=arr[h];
// 	arr[h]=temp;
// 	return reverse(arr , l+1,h-1);
// }

void swap(int* a ,int* b){
	int temp = *a;
	*a = *b;
	*b=temp;
}
int reverse(int arr[] ,int l){
	int h = 6;
	if(l  >h/2) return 0;
	swap(&arr[l],&arr[h-l-1]);
	return reverse(arr,l+1); 
}

bool isPallindrome(string s , int l){
	int h = 5;
	if(l > h/2) return true;
	if(s[l]!=s[h-l-1]) return false;
	return isPallindrome(s,l+1);
}

//multiple recurrsion call
//fibbonaci series 
int fibbo(int n){
	if (n<=1) return n;
	return fibbo(n-1)+fibbo(n-2);
}

int main(){
	
	//all - O(N)
	cout<<"Sum - "<<sumParameter(5)<<endl;
	cout<<"Sum - "<<sumFunctional(5)<<endl;
	cout<<"Factorial  - "<<factParameter(3)<<endl;
	cout<<"Factorial  - "<<factFunctional(3)<<endl;

	// reverse an array through recurrsion 
	int arr[6] = {1,2,3,4,5,6};
	cout<<"Reversed: ";
	reverse(arr,0);
	for (int i = 0; i < 6; i++)
	{
		cout<<arr[i]<<" ";
	}

	//checking a string is pallindrome or not
	//time complexity O(2^n)
	string s= "madam";
	cout<<"Pallindrome : "<<isPallindrome(s,0)<<endl;

	cout<<"Fibbonaci series "<<endl;
	for (int i = 0; i <= 14; ++i)
	{
		cout<<fibbo(i)<<" ";
	}
	cout<<endl;
	cout<<" -- "<<fibbo(14);

}