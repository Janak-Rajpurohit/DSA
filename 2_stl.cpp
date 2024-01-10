// Standard template library
#include <bits/stdc++.h> // it include all libs - math , string
#include <iostream>
#include <vector> 
using namespace std;


// C++ STL
// Algorithm
// Containers
// Function
// Iterators
void explainPair();
void explainList();
void Vector();

int main() {
  int a = 10;
  cout << "A " << a << endl;
  explainPair();

  cout << "Vectors function " << endl;
  Vector();
  cout << "List " << endl;
  explainList();
  
  // cout<<"This is Deque"<<endl;
  // explainDeque();
  // cout<<"This is stack"<<endl;
  // explainStack();

  return 0;
}

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
  v.emplace_back(10); // appending 10 by increasesing its size, it is more faster

  vector<pair<int, int>> vecpair;

  vecpair.push_back({1, 2});  // adding pair
  vecpair.emplace_back(3, 4); // no need to give {} it will assume it as pair

  vector<int> v0(5); // conatainer is already define with 5 instances of 0
  vector<int> v1(5,100); // conatainer is already define with 5 instances of 100

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
  // ele vector<int>::iterator itrbegin = v.rbegin();   // reverse the vector and begins from 1

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
  // // del from  2nd , to 3rd  ele , second argument is after last ele to del , begin+3 will not get del
  // v.erase(v.begin() + 1, v.begin() + 3);

  // // inserting at first
  // vector<int> vec(2, 100);            //{100,100}
  // vec.insert(vec.begin(), 300);       // {300,100,100}
  // vec.insert(vec.begin() + 1, 2, 10); // {300,10,10,100,100}

  // vector<int> copy(2, 50); //{50,50}
  //             // where , start vec , stop vec
  // vec.insert(vec.begin(), copy.begin(),copy.end()); // inserting entire vector {50,50,300,10,10,100,200}

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

// void explainDeque(){
//   deque<int> dq;
//   dq.push_back(1);      //{1}
//   dq.emplace_back(2);   //{1,2}
//   dq.push_front(4);     //{4,1,2}
//   dq.emplace_front(3);  // {3,4,1,2}
//   dq.pop_back();        //{3,4,1}
//   dq.pop_front();       //{4,1}

//   dq.back();
//   dq.front();
// }

// void explainStack(){
//   stack<int> st;
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   st.push(4);
//   st.emplace(5);
//   cout<<"Top - "<<st.top()<<endl;
//   st.pop();
//   cout<<"Top - "<<st.top()<<endl;
//   cout<<"Size - "<<st.size()<<endl;
//   cout<<"st.empty()"<<st.empty();

//   stack<int> s1,s2;
//   s1.swap(s2);
// }


// #include<iostream>
// using namespace std;

// int main(){
//   cout<<"Hello this is sublime text  cod"
//   return 0;
// }
