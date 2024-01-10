// GOOGLE
#include<bits/stdc++.h>

using namespace std;

// longest consecutive sequence - [100,102,103,1,1,2,3,4] - {1,2,3,4}longest one 

// BETTER
// Tc - O(n), Sc - sorting the array making change in input O(N)
// int lonegestConsecutive(vector<int> arr){
// 	int n = arr.size();
// 	sort(arr.begin(),arr.end());
// 	int count=1;
// 	int mini = arr[0];
//	int longest=-1;

//	for (int i = 1; i < n; ++i)
// 	{
// 		// number is +1 then previous
// 		if(arr[i]-1==mini){
// 			count++;
// 			mini=arr[i];
// 		}
// 		// if number is not equal to previsous then reset count =1 and start new with mini =arr[i]
// 		else if(arr[i]!=mini){
// 			mini = arr[i];
// 			count=1;
// 		}
// 		longest = max(longest,count);
// 	}
// 	return longest;
// }


// OPTIMAL TC-O(2N)+O(1) (avg), worst minor Tc - O(2N)+O(N),  SC- O(N)
// put everthing into unorder set ds 
// int lonegestConsecutiveOPT(vector<int> arr){
// 	int n = arr.size();
// 	if(n==0) return 0;
// 	int longest = 1;
// 	unordered_set<int> st;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		st.insert(arr[i]);
// 	}
// 	int cnt=0;
// 	for (auto it:st)
// 	{
// 		// if previous ele doesn't exsist
// 		if(st.find(it-1) == st.end()){
// 			cnt=1;
// 			int x=it;  //first element  
// 			while(st.find(x+1)!=st.end()){
// 				x=x+1;
// 				cnt++;
// 			}
// 			longest = max(cnt,longest);
// 		}
// 	}
// 	return longest;
// }

int lonegestConsecutiveOPT(vector<int> arr){
	int n = arr.size();
	int longest=-1;
	unordered_set<int> st;
	int count=0;
	int x;
	for (int i = 0; i < n; ++i)
	{
		st.insert(arr[i]);
	}

	for (auto it:st)
	{
		if(st.find(it-1)==st.end()){
			x = it;
			count=1;
			while(st.find(x+1) != st.end()){
				x=x+1;
				count++;
			}
			longest = max(longest,count);
		}
	}
	return longest;
}

int main(){
	vector<int> arr={100,102,100,101,101,4,3,2,3,2,1,1,1,2,5,6};
	cout<<"longest - "<<lonegestConsecutiveOPT(arr)<<endl;
	return 0;
}