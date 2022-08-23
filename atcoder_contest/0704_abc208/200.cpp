#include <iostream>
#include <vector>
using namespace std;

// コインの金額
const vector<int> value = {3628800, 362880, 40320, 5040, 720, 120, 24, 6, 2, 1};

int main() {
    // 入力
    int X;
    cin >> X;
    int a[10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};

    // 貪欲法
    int result = 0;
    for (int i = 0; i < 10; ++i) {
        // 枚数制限がない場合の枚数
        int add = X / value[i];

        // 枚数制限を考慮
        if (add > a[i]) add = a[i];

        // 残り金額を求めて，答えに枚数を加算する
        X -= value[i] * add;
        result += add;
    }
    cout << result << endl;
}