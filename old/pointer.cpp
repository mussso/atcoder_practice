#include <bits/stdc++.h>
using namespace std;
 
struct A {
  int data;
  void print() {
    cout << data << endl;
  }
};
 
int main() {
  A a = A { 1 };
 
  // オブジェクトaを指すポインタ
  A *p = &a;
  p->print();  // a.print()の呼び出し
  p->data = 2; // a.dataの書き換え
  p->print();
}