#include <stdio.h>

struct Student {
  int rollNumber;
  char name[50];
  char branch[50];
  float fee;
};

void stuDetails() {
  struct Student s1, s2;
  
  printf("Enter details of student 1:\n");
  printf("Roll Number: ");
  scanf("%d", &s1.rollNumber);
  printf("Name: ");
  scanf("%s", s1.name);
  printf("Branch: ");
  scanf("%s", s1.branch);
  printf("Fee: ");
  scanf("%f", &s1.fee);
  
  printf("Enter details of student 2:\n");
  printf("Roll Number: ");
  scanf("%d", &s2.rollNumber);
  printf("Name: ");
  scanf("%s", s2.name);
  printf("Branch: ");
  scanf("%s", s2.branch);
  printf("Fee: ");
  scanf("%f", &s2.fee);
  
  printf("\nStudent Information:\n");
  printf("Student 1 - Roll Number: %d, Name: %s, Branch: %s, Fee: ₹%.2f\n", s1.rollNumber, s1.name, s1.branch, s1.fee);
  printf("Student 2 - Roll Number: %d, Name: %s, Branch: %s, Fee: ₹%.2f\n", s2.rollNumber, s2.name, s2.branch, s2.fee);

}