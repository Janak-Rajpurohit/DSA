#include<bits/stdc++.h>

using namespace::std;

// setting default value to count in prototype otherwise error 
int Func_1toN(int i ,int count=1);
int Func_Nto1(int i, int count=1);


int main(){
  cout<<"Function calling 1 to N"<<endl;
  Func_1toN(9);
  cout<<"Function calling N to 1"<<endl;
  Func_Nto1(9);
  
  return 0;
}
// we have already set default value to count so no need in function 
int Func_1toN(int i,int count){
  // base condition
  if (count>i){
    return 1;
  }
  cout<<count++<<endl;
  Func_1toN(i,count);
}

int Func_Nto1(int i ,int count){
  // base condition
  if (count>i){
    return 1;
  
  }
  cout<<i<<endl;
  Func_Nto1(i-1,count);
}

// representing recursion flow in order of their name called recursion tree