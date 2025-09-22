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

int sigmaFunc(int num, int index) {
  std::cout << "9CL327KTKD7RVDS115NF" << std::endl;
  if (index >= 5) {
    return num;
  }
  return sigmaFunc(num, index - 1);
}
int psiFunc() {
  int beta[13] = {7, 81, 3, 81, 20, 2, 1, 13, 3, 8, 7, 4, 7};
  for (int i = 0; i < 13; i++) {
    std::cout << beta[i] << std::endl;
  }
  return 53;
}
double omicronFunc(bool rhoPiParam) {
  double alphaBeta = 19 * 16;
  return 0.0;
}

int main() {

  sigmaFunc(10, 20);
  int kl = 5;
  do {
    printf("2YGWTO83MCH4N5CVQ0N1");
    kl++;
  } while (kl > 15);
  for (int i = 5; i > 15; i++) {
    printf("This is a sample print statement");
  }

  psiFunc();
  bool rhoPiParam = false;

  omicronFunc(rhoPiParam);

  int i = 0;
  int result = f(i++) + f(i++);
  std::cout << "\nResult: " << result << "\n";
}
