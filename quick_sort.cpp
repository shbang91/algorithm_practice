#include <stdio.h>

int array[10] = {2, 3, 10, 8, 6, 7, 5, 4, 1, 9};

void quickSort(int *data, int start, int end) {
  if (start >= end) {
    return;
  }

  int key = start;
  int i = key + 1;
  int j = end;
  while (i <= j) {
    while (data[i] <= data[key] && i <= end) {
      i++;
    }

    while (data[j] >= data[key] && j > start) {
      j--;
    }
    if (i > j) {
      int temp = data[key];
      data[key] = data[j];
      data[j] = temp;
    } else {
      int temp = data[j];
      data[j] = data[i];
      data[i] = temp;
    }
  }

  quickSort(data, start, j - 1);
  quickSort(data, j + 1, end);
}

int main() {
  int length = sizeof(array) / sizeof(array[0]);
  quickSort(array, 0, length - 1);

  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  return 0;
}
