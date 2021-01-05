#include <stdio.h>

void funB(int n); // antes de fazer a chamada recursiva, a função já deve estar declarada!

void funA(int n) {

  if (n > 0) {
    printf("%d ", n);
    funB(n - 1);  // chama funcão A
  }
}

void funB(int n) {
  
  if (n > 1) {
    printf("%d ", n);
    funB(n/2);  // chama função B
  }
}

int main() {
  
  return 0;
}
