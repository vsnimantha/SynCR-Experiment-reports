// Template_25.tmpl
// GCC ICE but crashes clang as well
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=107360
#include <iostream>
#include <stdlib.h>
using namespace std;

int f(int x) {
  std::cout << x << " ";
  return x;
}

int nuFunc(int num, int index) {
  float nuGamma[3] = {7.0f, 5.0f, 5.0f};
  if (index >= 5) {
    return num;
    for (int i = 0; i < 3; i++) {
      std::cout << nuGamma[i] << std::endl;
    }
  }
  return nuFunc(num, index - 1);
}
void upsilonFunc() { std::cout << "P3B56ZYL3DJ8XDYOISFD" << std::endl; }
float chiFunc(double zetaParam, float thetaParam, int tauParam) {
  double phi = 18 / 4;
  return 52.254774973576254f;
}

int main() {

  nuFunc(10, 20);
  int kl = 15;
  do {
    double sigmaAlpha = 16 / 20;
    kl++;
  } while (kl < 10);
  for (int i = 20; i < 5; i++) {
    double psi = 3 / 10;
  }

  upsilonFunc();
  double zetaParam = 65.92707695849064;
  float thetaParam = 54.0651254064868f;
  int tauParam = 75;

  chiFunc(zetaParam, thetaParam, tauParam);

  int i = 0;
  int result = f(i++) + f(i++);
  std::cout << "\nResult: " << result << "\n";
}
