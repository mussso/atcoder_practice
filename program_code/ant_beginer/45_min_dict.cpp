#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define MAX_N 2000

char s[MAX_N];

int main() {
  int n;
  cin >> n >> s;

  int a=0, b=n-1;
   while (a<=b)
   {
       bool left = false;
       for (int i = 0; a+i <= b; i++)
       {
           if (s[a+i] < s[b-i]){
               left = true;
               break;
           }
           else {
               left = false;
               break;
           }
       }
       if (left) putchar(s[a++]);
       else putchar(s[b--]);
   }
}