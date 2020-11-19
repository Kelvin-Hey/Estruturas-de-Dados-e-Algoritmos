/* Get() Set() Max() */

int Get(struct Array arr, int index) {
  if (index >= 0 && index < arr.length) {
    return arr.A[index];
  }
  return -1;
}

void Set(struct Array *arr, int index, int x) {
  if (index >= 0 && index < arr->length) {
    arr->A[index] = x;
  }
}

int Max(struct Array arr) {
  int max = arr.A[0];
  int i;
  
  for (i = 1; i < arr.length; i++) {
    if (arr.A[i] > max) {
      max = arr.A[i];
    }
  }
  return max;
}

int Min(struct Array arr) {
  int min = arr.A[0];
  int i;
  
  for (i = 1; i < arr.length; i++) {
    if (arr.A[i] < min) {
      min = arr.A[i];
    }
  }
  return min;
}

