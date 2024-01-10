#include<bits/stdc++.h>

using namespace std;

int main(){
	//making array
	int size;
	cin>>size;
	int arr[size];
	map<int,int> map;


	for (int i = 0; i < size; ++i)
	{
		//input array
		cin>>arr[i];
		//pre computation
		map[arr[i]]++;
	}

	//printing all counts
	for (int i = 0; i < map.size(); ++i)
	{
		cout<<"Count of "<<i<<" - "<<map[i]<<endl;
	}

	for (auto it : map)
	{
		cout<<it.first<<"->"<<it.second<<endl;
	}
	//it sorts all key in sorted  manner
	//also use for character hashing map<char,int>
	//we can also use unroder_map
					// best/avg case - O(1) , worst case O(n) (few case)
	//first preference unorder_map then switch to map

	return 0; 
}