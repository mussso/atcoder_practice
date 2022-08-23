#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

// 抽象化したセグメント木
template<class Monoid> struct SegTree {
    using Func = function<Monoid(Monoid, Monoid)>;
    const Func F;
    const Monoid UNITY;
    int SIZE_R;
    vector<Monoid> dat;

    SegTree(int n, const Func f, const Monoid &unity): F(f), UNITY(unity) { init(n); }
    void init(int n) {
        SIZE_R = 1;
        while (SIZE_R < n) SIZE_R *= 2;
        dat.assign(SIZE_R * 2, UNITY);
    }

    /* set, a is 0-indexed */
    void set(int a, const Monoid &v) { dat[a + SIZE_R] = v; }
    void build() {
        for (int k = SIZE_R - 1; k > 0; --k)
            dat[k] = F(dat[k*2], dat[k*2+1]);
    }

    /* update a, a is 0-indexed */
    void update(int a, const Monoid &v) {
        int k = a + SIZE_R;
        dat[k] = v;
        while (k >>= 1) dat[k] = F(dat[k*2], dat[k*2+1]);
    }

    /* get [a, b), a and b are 0-indexed */
    Monoid get(int a, int b) {
        Monoid vleft = UNITY, vright = UNITY;
        for (int left = a + SIZE_R, right = b + SIZE_R; left < right; left >>= 1, right >>= 1) {
            if (left & 1) vleft = F(vleft, dat[left++]);
            if (right & 1) vright = F(dat[--right], vright);
        }                                                                                                              
        return F(vleft, vright);
    }
    inline Monoid operator [] (int a) { return dat[a + SIZE_R]; }

    /* debug */
    void print() {
        for (int i = 0; i < SIZE_R; ++i) {
            cout << (*this)[i];
            if (i != SIZE_R-1) cout << ",";
        }
        cout << endl;
    }
};

// 最長増加部分列の長さを求める
int LIS(const vector<long long> &a) {
    int N = (int)a.size();

    // 座標圧縮
    vector<long long> aval;
    for (int i = 0; i < N; ++i) aval.push_back(a[i]);
    sort(aval.begin(), aval.end());
    aval.erase(unique(aval.begin(), aval.end()), aval.end());

    // セグメント木 (区間取得を max としたもの)
    SegTree<int> dp(N+1,
                    [](int a, int b) { return max(a, b); },
                    0);

    // 更新
    int res = 0;
    for (int i = 0; i < N; ++i) {
        // a[i] が何番目か
        int h = lower_bound(aval.begin(), aval.end(), a[i]) - aval.begin();
        ++h; // 1-indexed にする

        // 値取得
        int A = dp.get(0, h);

        // 更新
        if (dp.get(h, h+1) < A + 1) {
            dp.update(h, A + 1);
            res = max(res, A + 1);
        }
    }
    return res;
}

int main() {
    int N; cin >> N;
    vector<long long> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    cout << LIS(a) << endl;
}  