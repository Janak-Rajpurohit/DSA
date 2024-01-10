// Stamdard template library
#include <bits/stdc++.h> // it include all libs - math , string
#include <iostream>
#include <vector>
using namespace std;

// C++ STL
// Algorithm
// Containers
// Function
// Iterators

void explainPair() {
  // only store two element
  pair<int, int> p = {1, 3};
  cout << "First ele :" << p.first << endl
       << "Second ele :" << p.second << endl;

  // Nested pair
  pair<int, pair<int, int>> nested_p = {1, {3, 4}};
  cout << "First ele :" << nested_p.first << endl
       << "Second ele first ele :" << nested_p.second.second << endl;

  // pair dtype

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << "Array : " << arr[1].second;
}

void Vector() {
  // container - dynamic array
  cout << "This is vectors" << endl;
  vector<int> v;

  v.push_back(1);     // appending 1
  v.emplace_back(2);  // appending 2 by increasesing its size, it is more faster
  v.emplace_back(10); // appending 2 by increasesing its size, it is more faster

  vector<pair<int, int>> vecpair;

  vecpair.push_back({1, 2});  // adding pair
  vecpair.emplace_back(3, 4); // no need to give {} it will assume it as pair

  vector<int> v0(5); // conatainer is already define with 5 instances of 0
  vector<int> v1(5,
                 100); // conatainer is already define with 5 instances of 100

  vector<int> v2(v1); // copy v1 vector

  //  accessing elements from vector   ,  v[0] OR v.at(0)
  // dtype :: iterator var = vector
  // iterator points on memory address of ele
  vector<int>::iterator it = v.begin(); // point on 1 address
  it++;                                 // next 2 address
        // *(it)  for accessing value form address
  cout << *(it) << endl;
  it = v.begin() + 2;
  cout << *(it) << endl;
  // vector<int>::iterator itend = v.end();    // points on address after last
  // ele vector<int>::iterator it= v.rend();   // point on the ele before first
  // ele vector<int>::iterator itrbegin = v.rbegin();   // reverse the vector
  // and begins from 1

  cout << v[0] << " this is vector accessing ele " << v.at(0) << endl;
  cout << " v.back " << v.back() << endl; // gives us last element

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }

  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }
  cout << "For Each Loop" << endl;
  for (auto it : v) {
    cout << it << endl;
  }
  // //deleteing 2nd ele
  // v.erase(v.begin() + 1);
  // // del from  2nd , to 3rd  ele , second argument is after last ele to del ,
  // begin+3
  // // will not get del
  // v.erase(v.begin() + 1, v.begin() + 3);

  // // inserting at first
  // vector<int> vec(2, 100);            //{100,100}
  // vec.insert(vec.begin(), 300);       // {300,100,200}
  // vec.insert(vec.begin() + 1, 2, 10); // {300,10,10,100,200}

  // vector<int> copy(2, 50); //{50,50}
  //                          // where , start vec , stop vec
  // vec.insert(vec.begin(), copy.begin(),
  //            copy.end()); // inserting entire vector
  //            {50,50,300,10,10,100,200}

  // cout << "Size of vector v - " << vec.size(); // no of elements in vec
  // v1.swap(v2);                                 // swaps vector name
  // vec.clear();                                 // eraseswhole vec
  // cout << "Is empty" << vec.empty();           //  check vec is empty or not
}
void explainList() {
  list<int> ls;

  ls.push_back(2);     //{2}
  ls.emplace_back(4);  // {2,4}
  ls.push_front(5);    //{5,2,4}
  ls.emplace_front(1); // {1,5,2,4}

  // Print the contents of the list
  for (const auto &element : ls) {
    cout << element << " ";
  }
  cout << endl;
}

void explainDeque() {
  deque<int> dq;
  dq.push_back(1);     //{1}
  dq.emplace_back(2);  //{1,2}
  dq.push_front(4);    //{4,1,2}
  dq.emplace_front(3); // {3,4,1,2}
  dq.pop_back();       //{3,4,1}
  dq.pop_front();      //{4,1}

  dq.back();
  dq.front();
}

void explainStack() {
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.emplace(5);
  cout << "Top - " << st.top() << endl;
  st.pop();
  cout << "Top - " << st.top() << endl;
  cout << "Size - " << st.size() << endl;
  cout << "st.empty()" << st.empty();

  stack<int> s1, s2;
  s1.swap(s2);
}
void explainQueue() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.emplace(5);
  q.back() += 5; // add 5 to last ele 5 = 10
  cout << "back - " << q.back() << endl;
  q.pop();
  cout << "Front - " << q.front() << endl;
  cout << "Size - " << q.size() << endl;
  cout << "q.empty() " << q.empty();
}
void explainPriorityQueue() {
  // Max heap - MAX num is given priority
  priority_queue<int> pq;
  pq.push(1);     //{1}
  pq.push(2);     //{2,1}
  pq.push(8);     //{8,2,1}
  pq.emplace(10); // {10,8,2,1}

  cout << "Top - " << pq.top() << endl; // 10
  pq.pop();
  cout << "Top - " << pq.top() << endl;
  pq.pop();

  cout << "Size - " << pq.size() << endl;
  cout << "q.empty() " << pq.empty() << endl;

  // Minimum heap , minimum number gets priority
  priority_queue<int, vector<int>, greater<int>> pq1;
  pq1.push(5); //{5}
  pq1.push(2); //{2,5}
  pq1.push(8); //{2,5,8}
  cout << "Top in minimum priority queue " << pq1.top() << endl;
}

// everthing in sorted order and unique elements
void explainSet() {
  set<int> st;
  st.insert(1);         //{1}
  st.emplace(2);        //{1,2}
  st.insert(2);         //{1,2}
  st.insert(8);         //{1,2,8}
  auto it = st.find(3); // returns the iterator/address which point to 3 ,if ele
                        // is not there in list then it returns end()

  st.erase(5); // erase 5 // takes logarithmic time  // we can also give
               // iterator/address of ele which takes constant time

  int cnt = st.count(1); // if 1 is present in set then returns 1 else 0
  cout << "cnt - " << cnt << endl;

  // {1,2,3,4,5}
  auto it1 = st.find(2);
  auto it2 = st.find(4);
  st.erase(it1, it2); // {1,4,5}  till ele before it2

  auto it3 = st.lower_bound(2);
  auto it4 = st.upper_bound(3);
  cout << "Done " << endl;
}
// sorted manner but not unique
void explainMultiSet() {
  set<int> ms;
  ms.insert(1);         //{1}
  ms.emplace(2);        //{1,2}
  ms.insert(2);         //{1,2}
  ms.insert(8);         //{1,2,8}
  ms.erase(1);          // it will erase all occurence of 1
  auto it = ms.find(3); // returns the iterator/address which point to 3 ,if ele
                        // is not there in list then it returns end()
  ms.erase(ms.find(2)); // erase first occurence of 2 , cause single iterator/address is give

  int cnt = ms.count(1); // return occurence of 1s
  cout << "cnt - " << cnt << endl;
}

// unordered , but unique
void explainUnorderedSet() {
  unordered_set<int> st;
  // all operations are same but not upper/lower bound
  // O(1)
}

// dictionary in python with unique keys
void explainMap() {
  // map < key dtype , value dtype >  var;
  map<int, int> mp;
  map<int, pair<int, int>> pair_mp; // key n , value {n1,n2}
  // var[key]=vlaue
  // stored in key stored order
  mp[1] = 2; // {1,2}
  // mp.emplace({3,1});  // {3,1}
  mp.insert({2, 4});

  for (auto it : mp) {
    //  it.first - key , it.second - value
    // it store key,value as pair - {key,value}
    cout << it.first << " " << it.second << endl;
  }
  cout << "Done" << endl;

  cout << "Value of key 1 " << mp[1]; // 2
  cout << "Value of key 5 " << mp[5]; // key not there returns null/0

  auto it1 = mp.find(2); // returns iterator/address of whole pair {key,value}
  cout << "Value at key 2 " << (*it1).second << endl;

  // auto it = mp.lower_bound(1);
  // auto it = mp.lower_bound(2);
}

void explainMultimap() {
  // store dupllicate keys , but sorted
  // O(log(n))
}

void explainUnorderedMap() {
  // unordered map not sorted and unique
  // works in O(1)
}

// analyse things in terms of only two pair and apply on whole array
bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second) {
    return true;
  }
  if (p1.second > p2.second) {
    return false;
  }
  if (p1.second == p2.second) {
    if (p1.first > p2.first) {
      return true;
    } else {
      return false;
    }
  }
}

bool comp(pair<int,int> p1 , pair<int,int> p2){
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second) return false;
  //now they are same
  if(p1.first>p2.first) return true;
  return false;
}

// ALGORITHM
void explainExtra() {
  vector<int> v;

  v.push_back(1);     // appending 1
  v.emplace_back(2);  // appending 2 by increasesing its size, it is more faster
  v.emplace_back(10); // appending 2 by increasesing its size, it is more faster
  int a =0;
  int n=3;
  // sort( start , end iterator)
  // sort(a, a + n);
  // for vectors
  sort(v.begin(), v.end());
  // sorting form 3rd element
  // sort(a + 2, a + 4);
  // sort in desending order
  // sort(a, a + n,greater<int>);

  // sorting in my own way like
  // sorting pair with second ele
  // if same second ele then sort acc first ele
  // sort(a, a + n, comp) // comp is comperator - pick pair and analyze diffrent condition and return true and false

  int num = 7; 
  int cnt = __builtin_popcount();// return 3 as 7 has 3 1s in binary form
  long long longnum = 12311234213213312;// for long long
  int cntll = __builtin_popcountll();

  string s = "123";
  sort(s.begin(), s.end());
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end())); // iteration through all permutations of "123"  -> 231 - 312 - 123
  //for printing all permutaion start from sorted type

  int maxi = max_element(a, a + n); // return max element address , * for returning element value
  int mini = *min_element(a, a + n); // return min element value , * for returning element value
}



int main() {
  // int a = 10;
  // cout << "A " << a << endl;
  // // explainPair();
  // cout << "Vectors function " << endl;
  // Vector();
  // cout << "List " << endl;
  // explainList();

  // cout<<endl<<"This is Deque"<<endl;
  // explainDeque();
  // cout<<endl<<"This is stack"<<endl;
  // explainStack();
  // cout<<endl<<"This is Queue"<<endl;
  // explainQueue();
  // cout<<endl<<"This is Priority Queue"<<endl;
  // explainPriorityQueue();
  // cout<<endl<<"This is Set"<<endl;
  // explainSet();
  cout << endl << "This is Map" << endl;
  explainMap();

  return 0;
}
