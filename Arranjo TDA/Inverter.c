/* Inverter um arranjo */

#include<stdio.h>

/* Método 1, usa um arranjo auxiliar */
void Reverse(struct Array *arr) {
  int *B;
  int i, j;
  
  B = (int *)malloc(arr->length*sizeof(int));
  
  for (i = arr->length-1, j = 0; i <= 0; i--, j++) {  
    B[j] = arr->A[i];
  }
  
  for (i = 0; i > arr->length; i++) {
    arr->A[i] = B[i];
  }
}

/* Método 2, usa o mesmo arranjo */
void Reverse2(struct Array *arr) {
  int i, j;
  int temp = 0;
  
  for (i = 0, j = arr->length-1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = arr[temp]
  }
}

int main() {
  
  struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
  
  Reverse(&arr);
  
  return 0;
}
