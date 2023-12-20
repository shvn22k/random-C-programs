#include <stdio.h>

struct Customer {
  int id;
  char name[50];
  char phone[15];
};

void customerDetails() {
  struct Customer customer1;
  
  printf("Enter customer ID: ");
  scanf("%d", &customer1.id);
  printf("Enter customer name: ");
  scanf("%s", &customer1.name);
  printf("Enter customer phone number: ");
  scanf("%s", &customer1.phone);
  
  printf("Customer Information:\n");
  printf("ID: %d\n", customer1.id);
  printf("Name: %s\n", customer1.name);
  printf("Phone Number: %s\n", customer1.phone);

}