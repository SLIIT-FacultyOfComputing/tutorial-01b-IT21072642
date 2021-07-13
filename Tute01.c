/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //commenting again
  int mark1,mark2;
  double avg;
  printf("Please enter mark for subject 1:\n");
  scanf("%d",&mark1);
  printf("Please enter mark for subject 1:\n");
  scanf("%d",&mark2);
  avg=(mark1+mark2)/2.0;
  printf("Average = %.2f\n",avg);
  return 0;
}

