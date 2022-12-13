//WAP illustrating array of pointers.

#include <stdio.h>

int main() {
  // array declaration and initialization 
  int arr[5] = {3, 5, 7, 9, 11};

  // printing the addresses and values represented by arr, &arr and &arr[0]
  printf("arr : %u, Value : %d\n", arr, *arr);

  printf("&arr : %u, Value : %d\n", &arr, *(arr));

  printf("&arr[0] : %u, Value : %d\n", &arr[0], *( &arr[0]));

  return 0;
}