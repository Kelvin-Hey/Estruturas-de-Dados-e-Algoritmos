/* Pesquisa Binária */

#include<stdio.h>

/* Recursiva */
int RBinarySearch( int a[], int low, int high, int key ) {
  int mid;

  if ( low <= high ) {
    mid = (low + high) / 2;

  if ( key == a[mid] ) {
    return mid;
  } else if ( key < a[mid] ) {
    return RBinarySearch( a, 1, mid-1, key );
  } else {
    return RBinarySearch( a, mid+1, high, key );
  }
  return -1;
}

/* Iterativa */
int BinarySearch( struct Array *arr, int key ) {
  int low, mid, high;
  low = 0;
  high = arr.length-1;

  while ( low <= high ) {
    mid = (low + high) / 2;

    if ( key == arr.A[mid] ) {
      return mid;
    } else if ( key < arr.A[mid] ) {
      high = mid - 1;
    } else {
      high = mid + 1;
    }
  }
  return 0;
}
