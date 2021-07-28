
// クラステンプレートの宣言
template <typename T>
struct Point {
  T x;
  T y;
  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

// xの二乗を返す (関数テンプレート版)
template <typename T>
T square(T x) {
  return x * x;
}