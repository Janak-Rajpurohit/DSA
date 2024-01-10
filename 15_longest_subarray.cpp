#include<bits/stdc++.h>
using namespace std;

// // better
// // Only for positive numbers >0
// // THIS IS BETTER SOL FOR >0 NUMBERS BUT
// // THIS IS OPTIMAL SOLUTION FOR ARRAY WITH (POSITIVE + NEGATIVE NUMBERS)
// // TC - O(NlogN) or Unordered  map O(Nx1) , worst minor case O(NxN)
// // hashmap - SC - O(N)
// int longestSubArrayWithSumK(vector<int> a,long long k){
// 	map<long long,int> preSumMap;
// 	long long sum=0;
// 	int maxlen = 0;
// 	for (int i = 0; i < a.size(); ++i)
// 	{
// 		sum += a[i];
// 		// array from start till current index is giving k
// 		if(sum==k){
// 			maxlen = max(maxlen,i+1);
// 		}
// 		long long rem =sum-k;
// 		// if it does not exsist then find function will point to end 
// 		if(preSumMap.find(rem) != preSumMap.end()){
// 			int len = i - preSumMap[rem];
// 			maxlen = max(maxlen,len);
// 		}
// 		// for dealing with 0 ,if it does not exsist then add sum
// 		if(preSumMap.find(sum) == preSumMap.end()){
// 			preSumMap[sum] = i;
// 		}
// 	}
// 	return maxlen;
// }

// // OPTIMAL SOLUTION FOR >0 ARRAY 
// // 2 pointer right pointer going to right and if sum>k then move left pointer right and reduce sum
// // TC - O(n)+ O(n)<-inner while loop - O(2n)  Sc - O(1)
// int longestSubArrayWithSumKPOSITIVE(vector<int> a, long long k){
// 	int left=0, right=0;
// 	long long sum=a[0];
// 	int maxlen=0;
// 	int n = a.size();
// 	while(right<n){
// 		while(left<=right && sum>k){
// 			sum-=a[left];
// 			left++;
// 		}
// 		if(sum==k){
// 			maxlen = max(maxlen,right-left+1);
// 		}
// 		right++;
// 		if(right<n) sum+=a[right];
// 	}
// 	return maxlen;
// }

int longestSubArrayWithSumKPOSITIVE(vector<int> arr, int k){
	int left = 0;
	int right = 0;
	int longest = -1;
	int sum=0;
	int n = arr.size();
	while(right<n){
		sum = sum+arr[right];
		if(sum==k){
			longest = max(longest,right-left+1);
		}
		while(left<=right && sum>k){
			sum = sum - arr[left];
			left++;k
		}
		right++;
	}
	return longest;
}

int main(){
	vector<int> a = {1,2,2,1,1,1,1,4,2,3};
	// cout<<"Longest Subarray length - "<<longestSubArrayWithSumK(a,3)<<endl;
	cout<<"Optimal Longest Subarray(>0) length - "<<longestSubArrayWithSumKPOSITIVE(a,3)<<endl;
	return 0;
}