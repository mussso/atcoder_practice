#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


double pow(double x){
    return x * x;
}

double distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1 - x2) + pow(y1 - y2));
}

int main() {
  int n;
  cin >> n;
  vector<double> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  double answer = 0.0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      double temp_distance = distance(x[i], y[i], x[j], y[j]);
      if (answer < temp_distance) {
        answer = temp_distance;
      }
    }
  }
  printf("%.5f\n", answer);
  return 0;
}