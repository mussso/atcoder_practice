#include <bits/stdc++.h>
using namespace std;
 
int main () {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
 
  bool ans = false;
 
  // すべての選び方を試して、総和がKになるものがあるかを調べる
  for (int tmp = 0; tmp < (1 << 20); tmp++) {
    bitset<20> s(tmp);  // 最大20個なので20ビットのビット列として扱う
    cout << tmp<< endl;
 
    // ビット列の1のビットに対応する整数を選んだとみなして総和を求める
    int sum = 0;
    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
        sum += A.at(i);
      }
    }
    if (sum == K) {
      ans = true;
      cout << s << endl;
      break;
    }
  }
 
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}