typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <queue>
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define MAX_N 100001
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
ll N;
ll A[MAX_N]; ll B[MAX_N]; ll C[MAX_N];
ll ans;

priority_queue<int, vector<int>, greater<int>> QA;
priority_queue<int, vector<int>, greater<int>> QB;
priority_queue<int, vector<int>, greater<int>> QC;

int main() {
    cin >> N;
    rep(i,0,N) cin >> A[i];
    rep(i,0,N) cin >> B[i];
    rep(i,0,N) cin >> C[i];

    rep(i,0,N) QA.push(A[i]);
    rep(i,0,N) QB.push(B[i]);
    rep(i,0,N) QC.push(C[i]);

    rep(i,0,N){
        ll a,b,c;
        a = QA.top();
        QA.pop();

        while(!QB.empty()){
            b = QB.top();
            if(b<=a){
                QB.pop();
            } else {
                QB.pop();
                break;
            }
        }

        while(!QC.empty()){
            c = QC.top();
            if(c<=b){
                QC.pop();
            } else {
                QC.pop();
                break;
            }
        }

        if(a<b && b<c) ans++;
        if(QA.empty() || QB.empty() || QC.empty()) break;
    }
    cout << ans << endl;
}