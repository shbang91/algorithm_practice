#include <stdio.h>

int main() {
  int array[10] = {1, 10, 8, 7, 5, 6, 3, 4, 2, 9};

  int length = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < length - 1; i++) {
    int j = i + 1;
    while (array[j] < array[j - 1]) {
      int temp = array[j - 1];
      array[j - 1] = array[j];
      array[j] = temp;
      j--;
    }
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
