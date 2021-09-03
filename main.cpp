#include <iostream>
#include <math.h>
using namespace std;

  double m = 40;
  double n = 20;
  double p = 1;

  double pi = 3.1415926535897932384626433832795028841971693993751;

double f (double x, double y) {
  return 0.2*(x*x-y*y);
}

double g (double alpha, double beta) {
  double J1 = m*n*alpha;
  return J1*f(40*alpha*cos(beta), 20*alpha*sin(beta));
}

double h (double b, double a) {

  double J2 = p*pi/2.0;
  return J2*g((p/2.0)*(1+a), (b+1)*pi);
}

int main() {

  double integ = ((25.0/81.0)*h(-sqrt(3.0/5.0),-sqrt(3.0/5.0))+(40.0/81.0)*h(0,-sqrt(3.0/5.0))+(25.0/81.0)*h(sqrt(3.0/5.0),-sqrt(3.0/5.0))+(40.0/81.0)*h(-sqrt(3.0/5.0),0)+(64.0/81.0)*h(0,0)+(40.0/81.0)*h(sqrt(3.0/5.0),0)+(25.0/81.0)*h(-sqrt(3.0/5.0),sqrt(3.0/5.0))+(40.0/81.0)*h(0,sqrt(3.0/5.0))+(25.0/81.0)*h(-sqrt(3.0/5.0),sqrt(3.0/5.0)));

  cout << "O volume estimado é: " << integ;

}