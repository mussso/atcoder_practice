#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string a;
  char b; 
  int c;
  cin >> a;

  for ( int i = 0; i < 3; i++ ){
      b = a.at(i);
      if (b == '1'){
         c += 1;
      }
  }
  cout << c << endl;
}