#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string a, b, c;
  cin >> a >> b;

  vector<int> vec = {1,2,3};
  std::vector<int>::iterator ii = vec.begin();
  reverse(vec.begin(), vec.end());

  cout << a +"\n" << endl;
  size_t g = a.size();

  if (a.size() < b.size()){
  	c = b;
  }
  else{
  	c = a;
  }
  cout << c +"\n" << endl;
}