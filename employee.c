#include <stdio.h>

struct Employee {
  int id;
  char name[50];
  char designation[50];
  float salary;
};

void employeeDetails() {
  struct Employee employees[50];
  float totalSalary = 0;

  for (int i = 0; i < 5; i++) {
    printf("Enter details of employee %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &employees[i].id);
    printf("Name: ");
    scanf("%s", employees[i].name);
    printf("Designation: ");
    scanf("%s", employees[i].designation);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
    totalSalary += employees[i].salary;
  }

  printf("\nAverage salary of all employees: ₹%.2f\n", totalSalary /5);

}