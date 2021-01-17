#include<stdio.h>

struct Array {
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr) {
  int i;
  printf("\nElements are\n");
  for (i = 0; i < arr.length; i++)
    printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x) {
  if (arr->length < arr->size)
    arr->A[arr->length++] = x;
}

void Insert(struct Array * arr, int index, int x) { // index: POSIÇÃO x: VALOR
  int i;
  
  if (index >= 0 && index <= arr->length) { // até chegar ao último elemento preechido do vetor 
    for (i = arr->length; i > index; i--) {
      arr->A[i] = arr->A[i - 1];     // muda a posição dos elementos para a direita
    }
    
    arr->A[index] = x;
    arr->length++;
  }
}

int main() {
  struct Array arr1 = {{2,3,4,5,6},10,5};
  
  Append( & arr1, 10);
  Insert( & arr1, 0, 12);
  Display(arr1);
  return 0;
}
