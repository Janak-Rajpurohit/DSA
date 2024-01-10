//  maths euclidean concept
// if u want last one digit of number mod  10  (%10)
// if u want first one digit of number floor  10 (/10)
// if u want last two digit mod 100
// if u want last three digit mod 1000

#include <bits/stdc++.h>
using namespace std;

// // counting digits, reversing , pallindrome checker , armstrong
// int main() {
//   int n,num, last, length = 0, revN=0,sum=0;
//   cout << "Enter the number ";
//   cin >> num;
//   n=num;
//   cout << "Digits are" << endl;
//   while (num > 0) {
//     last = num % 10;
//     cout << last << endl;
//     num = num / 10;
//     length++;
//     revN = revN*10 + last;
//     sum=sum+pow(last,3);
//   }
  
  // // more efficient approach for counting number of digits
  //  // log10(7756) -> 3.8 -> +1 -> 4.8 -int-> 4
  // length  = (int) (log10(num))+1;
  
  // cout << "No of digits - " << length << endl;
  
  // cout << "Reversed Number - " << revN << endl;
  // // pallindrome
  // if(revN==n){
  //     cout<<"The number is pallindrome"<<endl;
  //   }
  // else{
  //   cout<<"The number is not pallindrome"<<endl;
  // }
  // // armstrong
  // if(sum==n){
  //     cout<<"The number is armstrong"<<endl;
  //   }
  // else{
  //   cout<<"The number is not armstrong"<<endl;
  // }
  // // if no of iteration depends on dvision by x here it 10
  // // then time complexicity is O(logx(n))  , O(log10(n))
  
//   return 0;
// }

// print all divisions of n
// int main(){
//   int limit , num;
//   cout<<"Enter the number ";
//   cin>>num;

//   cout<<"The divisors are :-";
  
//   // for(int i =1 ; i<=num ; i++){
//   //   if(num%i==0){
//   //     cout<<i<<" ";
//   //   }
//   // }
//   // time complexcity O(n) 
//   // efficient approach 
//   // 
//   vector<int> v;
//   // i*i<=num 
//   for(int i = 1 ; i<=sqrt(num) ; i++){
//     if(num%i==0){
//       v.push_back(i);
//       // checking otherwise it will print two times
//       if (num/i!=i){
//         v.push_back(num/i);
//       }
//     }
//   }
//   // sorting the vector 
//   // O(no of factors * O(log(No of facctors))) 
//   sort(v.begin(),v.end());
//   // O(no of factors)
//   for(int n:v){
//     cout<<n<<" ";
//   }
//   return 0;
// }

// // prime number 
// int main(){
//   int num,count=0;
//   cout<<"Enter the number ";
//   cin>>num;
//   for(int i = 2 ; i<sqrt(num) ;i++){
//     if(num%i==0){
//       count =1;
//       break;
//     }
//   }
//   (count)?(cout<<"It is not prime number"):(cout<<"It is a prime number");
//   return 0;
// }

// GCD / HCF 
// o(min(a,b)) if no factor is there 
int main(){
  int a,b,count=0;
  cout<<"Enter the 2 number ";
  cin>>a;
  cin>>b;
  cout<<"GCD of both numbers - ";
  // for(int i = min(a,b) ; i>=1 ; i--){
  //   if(a%i==0 && b%i==0){
  //     cout<<i<<" ";
  //     break;
  //   }
  // }

  // Euclidean algo
  // a>b then 
  // gcd(a,b)  = gcd(a-b,b)
  // more efficient 
  // gcd(a,b) = gcd(a%b,b)
  while(a>0 && b>0){
    if(a>b) a=a%b;
    else b=b%a;
  }
  // if one is 0 then other will be gcd
  
  if(a==0) cout<<b;
  else cout<<a;
// here time complexcity O(log5 min(a,b))
  
  return 0;
    
}