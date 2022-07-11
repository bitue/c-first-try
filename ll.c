
//Structure: Structure in c is a collection multiple variables of various data types. By this structure, we can physically group our varibales and set them in a block of memory. So that we can access them from a single pointer.

#include <stdio.h>

struct Student{
  int roll;
  int class;
  int marks;
};

struct Student studentInput(int n) {
  struct Student s;
  printf("Enter the %dth student's details(roll class marks): ", n);
  scanf("%d %d %d", &s.roll, &s.class, &s.marks);
  return s;
}

void main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  struct Student students[n];

  int markSum = 0;
  for (int i = 0; i < n; i++) {
    students[i] = studentInput(i + 1);
    markSum += students[i].marks;
  }
  printf("Summation of all students' marks: %d\n", markSum);
}
