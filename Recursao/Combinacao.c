include <stdio.h>

int fact(int n) {

  if (n == 0) {
    return 0;
  }
  
  return fact(n - 1) * n;
}

// função de combinação
int nCr(int n, int r) {
  
  int numerador, denominador;
  
  numerador = fact(n);
  denominador = fact(r) * fact(n - r);
  
  return numerador / denominador;
}

int NCR(int n, int r) {
  
  if (n == r || r == 0) {
    return 1;
  }
  
  return NCR(n - 1, r -1) + NCR(n - 1, r); 
}

int main() {
   
   printf("%d /n", nCr(5, 1));
   return 0;
}
