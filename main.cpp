#include <iostream>
#include <math.h>
using namespace std;

  double m = 40;
  double n = 20;
  double p = 1;

  double pi = 3.1415926535897932384626433832795028841971693993751;

double g (double a, double b) {
  return pow((p/2.0)*(1+a), 3)*((m*m+n*n)*pow(cos((b+1)*pi),2)-n*n);
}

int main() {

  double coef_J1_alpha = m*n;
  double J2 = p*pi/2.0;

  double integ = ((25.0/81.0)*g(-sqrt(3.0/5.0),-sqrt(3.0/5.0))+(40.0/81.0)*g(0,-sqrt(3.0/5.0))+(25.0/81.0)*g(sqrt(3.0/5.0),-sqrt(3.0/5.0))+(40.0/81.0)*g(-sqrt(3.0/5.0),0)+(64.0/81.0)*g(0,0)+(40.0/81.0)*g(sqrt(3.0/5.0),0)+(25.0/81.0)*g(-sqrt(3.0/5.0),sqrt(3.0/5.0))+(40.0/81.0)*g(0,sqrt(3.0/5.0))+(25.0/81.0)*g(-sqrt(3.0/5.0),sqrt(3.0/5.0)));

  cout << "O volume estimado é: " << J2*coef_J1_alpha*0.2;





}