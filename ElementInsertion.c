#include <stdio.h>

void insert() {
  int arr[100], n, i, num, pos;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number to be inserted: ");
  scanf("%d", &num);

  printf("Enter the position at which the number should be inserted: ");
  scanf("%d", &pos);

  for (i = n ; i >= pos; i--) {
    arr[i + 1] = arr[i];
  }
  arr[pos] = num;
  n++;

  printf("The array after insertion is: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

 
}