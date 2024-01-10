#include<bits/stdc++.h>

using namespace std;

// int buySellStock(int arr[],int n){
// 	int profit=0;
// 	int ans=arr[0];
// 	for (int i = 1; i < n; ++i)
// 	{
// 		profit = max(profit,arr[i]-ans);
// 		// this is part of DP where we remenber previouse minimum
// 		ans=min(ans,arr[i]);
// 	}
// 	return profit;
// }

int buySellStock(int arr[],int n){
	int profit=0;
	int buy=arr[0];
	for (int i = 0; i < n; ++i)
	{
		profit = max(profit,arr[i]-buy);
		buy = min(buy,arr[i]);
	}
	return profit;
}

int main(){
	int n=5;
	// for making profit buying at 1 and selling at 6
	int arr[n] = {7,5,8,6,1};
	cout<<"profit "<<buySellStock(arr,n)<<endl;
 	return 0;
 }