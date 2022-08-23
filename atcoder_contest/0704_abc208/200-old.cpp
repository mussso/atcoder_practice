#include <iostream>
using namespace std;

int _main() {
  int X;
  cin >> X;
  int res = 0;
  for (int a = 0; a <= 100; ++a) {
    for (int b = 0; b <= 100; ++b) {
      for (int c = 0; c <= 100; ++c) {
          for (int d = 0; d <= 100; ++d) {
              for (int e = 0; e <= 100; ++e) {
                  for (int f = 0; f <= 100; ++f) {
                      for (int g = 0; g <= 100; ++g) {
                          for (int h = 0; h <= 100; ++h) {
                              for (int i = 0; i <= 100; ++i) {
                                  for (int j = 0; j <= 100; ++j) {
                                    int total = 1*a + 2*b + 6*c + 24*d + 120*e + 720*f + 5040*g + 40320*h + 362880*i + 3628800*j; // 合計金額
                                    if (total == X) {
                                        res = a+b+c+d+e+f+g+h+i+j;
                                        return res;
                                    } // 合計金額が X に一致したら答えをインクリメント
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    }
  }
  cout << res << endl;
}

int main() {
    int result = _main();
    cout << result << endl;
}