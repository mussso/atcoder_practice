#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n; cin >> n; // 入力

    // エラトステネスのふるい
    bitset<1000000> is_prime(0); // 十分大きなサイズを確保します
    for (int i = 2; i <= n; ++i) is_prime.set(i); // とりあえず全部ふるいに入れます
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) { // 素数 i を発見したら
            for (int j = i * 2; j <= n; j += i) {
                is_prime.reset(j); // i の倍数をふるい落とす
            }
        }
    }

    // 結果出力
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) cout << i << endl;
    }
}