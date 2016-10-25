#include "sort.h"

int main(void) {
  char arr[10] = {7,10,9,5,0,8,1,3,4,2,3};
  int size;

  size = sizeof(arr);

  quickSort(&arr, 0, size-1);

  for (int i = 0;i < size;i++) {
    printf("%s\n", arr[i]);
  }

  return 0;
}
