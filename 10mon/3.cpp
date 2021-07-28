#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, a, b, c;
  cin >> N;

  vector<int> vec;
  for (int j = 0; j < N; j++){
      cin >> c;
      vec.push_back(c); 
  }
  
  b = 0;
  while (true) {
    a = 0;
    for ( int i=0; i<N; i++){
        int val = vec[i];
        if ( val % (2 * (b + 1)) == 0){
            a++;
        }
    }
    if (a == N){
        b++;
    }
    else {
        break;
    }
  }
  cout << b << endl;
}