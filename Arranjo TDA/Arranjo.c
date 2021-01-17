#include <stdio.h>
#include <stdlib.h>

struct Array { // arranjo
  
  int *A;
  int size; // tamanho
  int length; // número de elementos 
};

void Display(struct Array arr) {
  int i;
  
  printf("Elementos são: ");
  for (i = 0; i < arr.length; i++) {
    printf("%d", arr.A[i]);
  }
}

int main() {
  
  struct Array arr;
  int n, i; 
      
  printf("Entre com o tamnaho do arranjo: ") ; 
  scanf("%d", &arr.size);
  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;
  
  printf("Entre com o número de números: ");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++) {
    scanf("%d", &arr.A[i] );
  } 
  
  arr.length = n;
  
  Display(arr);
  
  return 0; 
}
