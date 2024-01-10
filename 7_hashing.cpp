#include<bits/stdc++.h>

using namespace std;

int main(){
	//NUMBER HASHING 
	int n,arr[10],hash[10];
	//arr can stre numbers 0 to 9 & hash has index 0 to 9

	cout<<"Enter elements in arr:"<<endl;
	for (int i = 0; i < 10; ++i)
	{
		cin>>arr[i];
		hash[i]=0;
	}

	//counting  // computation/storing
	for (int i = 0; i <10; ++i)
	{
		hash[arr[i]]++;
	}

	//printng all counts // fetch
	for (int i = 0; i < 10; ++i)
	{
		cout<<"Count of "<<i<<" - "<<hash[i]<<endl; 
	}
	// max size we can declare is ~ 10^6 (1e6) in main otherwise it will throw segmentation error
	// we can declare it globally till 1e7 THIS IS FOR INT DATATYPE
	// for boolean in main we can delacre 1e7 array globablly 

	//when we daclare array globally it is initialized with values of zeros

	//CHARACTER HASHING 
	//considering string only has lower case letters 
	// we can takke 256 array for all characters ascii
	string s;
	cout<<"Enter the string ";
	cin>>s;
	int stringhash[26]={0};   // zero value array

	//computing 
	for (char c :s)
	{
		stringhash[c-'a']++;
	}

	//taking input / fetch 
	while(true){
		char c;
		cin>>c;
		cout<<"Count of "<<c<<" - "<<stringhash[c-'a']<<endl;
		//for exiting loop
		if(c=='v'){
			exit(0);
		}
	}
	return 0;
}