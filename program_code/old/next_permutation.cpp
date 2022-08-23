#include <bits/stdc++.h>
using namespace std;
 
int main() {
//   vector<int> v = { 2, 1, 3 };
//   sort(v.begin(), v.end());
//   do {
//     // 1行で今の並び方を出力
//     for (int x : v) {
//       cout << x << " ";
//     }
//     cout << endl;
//   } while (next_permutation(v.begin(), v.end()));

  int x = 1;
  int *p;    // int8_t型に対するポインタを定義
  p = &x;    // xのアドレスで初期化
  *p = 2;    // ポインタが指すメモリへの書き込み
  cout << x << endl;  // 2
}